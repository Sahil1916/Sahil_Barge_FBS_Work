#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

// Pass by value
struct Employee storeByValue() {
    struct Employee e;
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf("%s", e.name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);
    return e;
}

void displayByValue(struct Employee e) {
    printf("\n--- Employee Details (Pass by Value) ---\n");
    printf("ID     : %d\n", e.id);
    printf("Name   : %s\n", e.name);
    printf("Salary : %.2f\n", e.salary);
}

// Pass by address (array)
void storeByAddress(struct Employee *e, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(e+i)->id);
        printf("Name: ");
        scanf("%s", (e+i)->name);
        printf("Salary: ");
        scanf("%f", &(e+i)->salary);
    }
}

void displayByAddress(struct Employee *e, int n) {
    printf("\n--- Employee Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d -> ID: %d | Name: %s | Salary: %.2f\n",
               i+1, (e+i)->id, (e+i)->name, (e+i)->salary);
    }
}

// Pass one variable by address
void storeOneByAddress(struct Employee *e) {
    printf("\nEnter ID: ");
    scanf("%d", &e->id);
    printf("Enter Name: ");
    scanf("%s", e->name);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

void displayOneByAddress(struct Employee *e) {
    printf("\n--- Employee (Pass One by Address) ---\n");
    printf("ID     : %d\n", e->id);
    printf("Name   : %s\n", e->name);
    printf("Salary : %.2f\n", e->salary);
}

void main() {
    // 1. Pass by value
    printf("=== Pass by Value ===\n");
    struct Employee e1 = storeByValue();
    displayByValue(e1);

    // 2. Pass by address (array)
    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct Employee *arr = (struct Employee *)malloc(n * sizeof(struct Employee));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    // 3. Pass one variable by address
    printf("\n=== Pass One Variable by Address ===\n");
    struct Employee e2;
    storeOneByAddress(&e2);
    displayOneByAddress(&e2);
}
