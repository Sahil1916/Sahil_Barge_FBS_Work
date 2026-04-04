#include <stdio.h>
#include <stdlib.h>

struct HR {
    int id;
    char name[50];
    float salary;
    float commission;
};

// Pass by value
struct HR storeByValue() {
    struct HR h;
    printf("Enter ID: ");
    scanf("%d", &h.id);
    printf("Enter Name: ");
    scanf("%s", h.name);
    printf("Enter Salary: ");
    scanf("%f", &h.salary);
    printf("Enter Commission: ");
    scanf("%f", &h.commission);
    return h;
}

void displayByValue(struct HR h) {
    printf("\n--- HR Details (Pass by Value) ---\n");
    printf("ID         : %d\n", h.id);
    printf("Name       : %s\n", h.name);
    printf("Salary     : %.2f\n", h.salary);
    printf("Commission : %.2f\n", h.commission);
    printf("Total Pay  : %.2f\n", h.salary + h.commission);
}

// Pass by address (array)
void storeByAddress(struct HR *h, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for HR %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(h+i)->id);
        printf("Name: ");
        scanf("%s", (h+i)->name);
        printf("Salary: ");
        scanf("%f", &(h+i)->salary);
        printf("Commission: ");
        scanf("%f", &(h+i)->commission);
    }
}

void displayByAddress(struct HR *h, int n) {
    printf("\n--- HR Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("HR %d -> ID: %d | Name: %s | Salary: %.2f | Commission: %.2f\n",
               i+1, (h+i)->id, (h+i)->name, (h+i)->salary, (h+i)->commission);
    }
}

// Pass one variable by address
void storeOneByAddress(struct HR *h) {
    printf("\nEnter ID: ");
    scanf("%d", &h->id);
    printf("Enter Name: ");
    scanf("%s", h->name);
    printf("Enter Salary: ");
    scanf("%f", &h->salary);
    printf("Enter Commission: ");
    scanf("%f", &h->commission);
}

void displayOneByAddress(struct HR *h) {
    printf("\n--- HR (Pass One by Address) ---\n");
    printf("ID         : %d\n", h->id);
    printf("Name       : %s\n", h->name);
    printf("Salary     : %.2f\n", h->salary);
    printf("Commission : %.2f\n", h->commission);
    printf("Total Pay  : %.2f\n", h->salary + h->commission);
}

void main() {
    printf("=== Pass by Value ===\n");
    struct HR h1 = storeByValue();
    displayByValue(h1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct HR *arr = (struct HR *)malloc(n * sizeof(struct HR));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct HR h2;
    storeOneByAddress(&h2);
    displayOneByAddress(&h2);
}
