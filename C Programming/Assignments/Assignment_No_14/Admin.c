#include <stdio.h>
#include <stdlib.h>

struct Admin {
    int id;
    char name[50];
    float salary;
    float allowance;
};

// Pass by value
struct Admin storeByValue() {
    struct Admin a;
    printf("Enter ID: ");
    scanf("%d", &a.id);
    printf("Enter Name: ");
    scanf("%s", a.name);
    printf("Enter Salary: ");
    scanf("%f", &a.salary);
    printf("Enter Allowance: ");
    scanf("%f", &a.allowance);
    return a;
}

void displayByValue(struct Admin a) {
    printf("\n--- Admin Details (Pass by Value) ---\n");
    printf("ID        : %d\n", a.id);
    printf("Name      : %s\n", a.name);
    printf("Salary    : %.2f\n", a.salary);
    printf("Allowance : %.2f\n", a.allowance);
    printf("Total Pay : %.2f\n", a.salary + a.allowance);
}

// Pass by address (array)
void storeByAddress(struct Admin *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Admin %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(a+i)->id);
        printf("Name: ");
        scanf("%s", (a+i)->name);
        printf("Salary: ");
        scanf("%f", &(a+i)->salary);
        printf("Allowance: ");
        scanf("%f", &(a+i)->allowance);
    }
}

void displayByAddress(struct Admin *a, int n) {
    printf("\n--- Admin Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Admin %d -> ID: %d | Name: %s | Salary: %.2f | Allowance: %.2f\n",
               i+1, (a+i)->id, (a+i)->name, (a+i)->salary, (a+i)->allowance);
    }
}

// Pass one variable by address
void storeOneByAddress(struct Admin *a) {
    printf("\nEnter ID: ");
    scanf("%d", &a->id);
    printf("Enter Name: ");
    scanf("%s", a->name);
    printf("Enter Salary: ");
    scanf("%f", &a->salary);
    printf("Enter Allowance: ");
    scanf("%f", &a->allowance);
}

void displayOneByAddress(struct Admin *a) {
    printf("\n--- Admin (Pass One by Address) ---\n");
    printf("ID        : %d\n", a->id);
    printf("Name      : %s\n", a->name);
    printf("Salary    : %.2f\n", a->salary);
    printf("Allowance : %.2f\n", a->allowance);
    printf("Total Pay : %.2f\n", a->salary + a->allowance);
}

void main() {
    printf("=== Pass by Value ===\n");
    struct Admin a1 = storeByValue();
    displayByValue(a1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct Admin *arr = (struct Admin *)malloc(n * sizeof(struct Admin));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct Admin a2;
    storeOneByAddress(&a2);
    displayOneByAddress(&a2);
}
