#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 50
#define MAX_CART     20

struct Product {
    int id;
    char name[50];
    float price;
    int stock;
};

struct CartItem {
    struct Product product;
    int qty;
};

// --------- Product Functions ---------
void addProduct(struct Product *products, int *count) {
    printf("\nEnter Product ID   : ");
    scanf("%d", &products[*count].id);
    printf("Enter Product Name : ");
    scanf(" %[^\n]", products[*count].name);
    printf("Enter Price        : ");
    scanf("%f", &products[*count].price);
    printf("Enter Stock        : ");
    scanf("%d", &products[*count].stock);
    (*count)++;
    printf("Product added successfully!\n");
}

void displayProducts(struct Product *products, int count) {
    if (count == 0) { printf("No products available.\n"); return; }
    printf("\n%-5s %-20s %-10s %-8s\n", "ID", "Name", "Price", "Stock");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s Rs.%-7.2f %-8d\n",
               products[i].id, products[i].name,
               products[i].price, products[i].stock);
    }
}

struct Product* findProduct(struct Product *products, int count, int id) {
    for (int i = 0; i < count; i++)
        if (products[i].id == id) return &products[i];
    return NULL;
}

// --------- Cart Functions ---------
void addToCart(struct CartItem *cart, int *cartCount,
               struct Product *products, int prodCount) {
    int id, qty;
    printf("\nEnter Product ID to add to cart: ");
    scanf("%d", &id);

    struct Product *p = findProduct(products, prodCount, id);
    if (p == NULL) { printf("Product not found!\n"); return; }

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    if (qty > p->stock) {
        printf("Insufficient stock! Available: %d\n", p->stock);
        return;
    }

    // Check if already in cart
    for (int i = 0; i < *cartCount; i++) {
        if (cart[i].product.id == id) {
            cart[i].qty += qty;
            p->stock -= qty;
            printf("Quantity updated in cart.\n");
            return;
        }
    }

    cart[*cartCount].product = *p;
    cart[*cartCount].qty = qty;
    p->stock -= qty;
    (*cartCount)++;
    printf("Item added to cart!\n");
}

void displayCart(struct CartItem *cart, int cartCount) {
    if (cartCount == 0) { printf("Cart is empty.\n"); return; }

    float total = 0;
    printf("\n========== CART ==========\n");
    printf("%-20s %-8s %-10s %-10s\n", "Product", "Qty", "Price", "Amount");
    printf("------------------------------------------\n");
    for (int i = 0; i < cartCount; i++) {
        float amount = cart[i].product.price * cart[i].qty;
        printf("%-20s %-8d Rs.%-7.2f Rs.%.2f\n",
               cart[i].product.name, cart[i].qty,
               cart[i].product.price, amount);
        total += amount;
    }
    printf("------------------------------------------\n");
    printf("%-38s Rs.%.2f\n", "TOTAL", total);
    printf("==========================================\n");
}

void generateBill(struct CartItem *cart, int cartCount) {
    if (cartCount == 0) { printf("Cart is empty!\n"); return; }

    float total = 0;
    float tax = 0;
    printf("\n\n========================================\n");
    printf("          POINT OF SALE BILL            \n");
    printf("========================================\n");
    printf("%-20s %-6s %-8s %s\n", "Item", "Qty", "Rate", "Amount");
    printf("----------------------------------------\n");
    for (int i = 0; i < cartCount; i++) {
        float amount = cart[i].product.price * cart[i].qty;
        printf("%-20s %-6d %-8.2f %.2f\n",
               cart[i].product.name, cart[i].qty,
               cart[i].product.price, amount);
        total += amount;
    }
    tax = total * 0.18;  // 18% GST
    printf("----------------------------------------\n");
    printf("%-36s %.2f\n", "Sub Total  :", total);
    printf("%-36s %.2f\n", "GST (18%)  :", tax);
    printf("%-36s %.2f\n", "GRAND TOTAL:", total + tax);
    printf("========================================\n");
    printf("         Thank You! Visit Again!        \n");
    printf("========================================\n");
}

void main() {
    struct Product products[MAX_PRODUCTS];
    struct CartItem cart[MAX_CART];
    int prodCount = 0, cartCount = 0;
    int choice;

    // Pre-load some products
    strcpy(products[0].name, "Rice"); products[0].id=1; products[0].price=60; products[0].stock=100;
    strcpy(products[1].name, "Milk"); products[1].id=2; products[1].price=25; products[1].stock=50;
    strcpy(products[2].name, "Bread"); products[2].id=3; products[2].price=40; products[2].stock=30;
    strcpy(products[3].name, "Eggs (dozen)"); products[3].id=4; products[3].price=80; products[3].stock=40;
    prodCount = 4;

    do {
        printf("\n====== POINT OF SALE SYSTEM ======\n");
        printf("1. View Products\n");
        printf("2. Add New Product\n");
        printf("3. Add Item to Cart\n");
        printf("4. View Cart\n");
        printf("5. Generate Bill\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: displayProducts(products, prodCount); break;
            case 2: addProduct(products, &prodCount); break;
            case 3: addToCart(cart, &cartCount, products, prodCount); break;
            case 4: displayCart(cart, cartCount); break;
            case 5: generateBill(cart, cartCount); break;
            case 0: printf("Exiting... Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);
}
