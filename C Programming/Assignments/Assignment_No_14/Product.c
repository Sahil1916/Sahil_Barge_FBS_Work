#include <stdio.h>
#include <stdlib.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

// Pass by value
struct Product storeByValue() {
    struct Product p;
    printf("Enter ID: ");
    scanf("%d", &p.id);
    printf("Enter Name: ");
    scanf("%s", p.name);
    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);
    printf("Enter Price: ");
    scanf("%f", &p.price);
    return p;
}

void displayByValue(struct Product p) {
    printf("\n--- Product Details (Pass by Value) ---\n");
    printf("ID       : %d\n", p.id);
    printf("Name     : %s\n", p.name);
    printf("Quantity : %d\n", p.quantity);
    printf("Price    : %.2f\n", p.price);
    printf("Total    : %.2f\n", p.quantity * p.price);
}

// Pass by address (array)
void storeByAddress(struct Product *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Product %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(p+i)->id);
        printf("Name: ");
        scanf("%s", (p+i)->name);
        printf("Quantity: ");
        scanf("%d", &(p+i)->quantity);
        printf("Price: ");
        scanf("%f", &(p+i)->price);
    }
}

void displayByAddress(struct Product *p, int n) {
    printf("\n--- Product Array (Pass by Address) ---\n");
    printf("%-5s %-15s %-10s %-10s %-10s\n", "ID", "Name", "Quantity", "Price", "Total");
    printf("------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10.2f %-10.2f\n",
               (p+i)->id, (p+i)->name, (p+i)->quantity,
               (p+i)->price, (p+i)->quantity * (p+i)->price);
    }
}

// Pass one variable by address
void storeOneByAddress(struct Product *p) {
    printf("\nEnter ID: ");
    scanf("%d", &p->id);
    printf("Enter Name: ");
    scanf("%s", p->name);
    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);
    printf("Enter Price: ");
    scanf("%f", &p->price);
}

void displayOneByAddress(struct Product *p) {
    printf("\n--- Product (Pass One by Address) ---\n");
    printf("ID       : %d\n", p->id);
    printf("Name     : %s\n", p->name);
    printf("Quantity : %d\n", p->quantity);
    printf("Price    : %.2f\n", p->price);
    printf("Total    : %.2f\n", p->quantity * p->price);
}

void main() {
    printf("=== Pass by Value ===\n");
    struct Product p1 = storeByValue();
    displayByValue(p1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 3;
    struct Product *arr = (struct Product *)malloc(n * sizeof(struct Product));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct Product p2;
    storeOneByAddress(&p2);
    displayOneByAddress(&p2);
}
