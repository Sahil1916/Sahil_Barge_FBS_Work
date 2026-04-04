#include <stdio.h>
#include <stdlib.h>

struct SalesManager {
    int id;
    char name[50];
    float salary;
    float incentive;
    float target;
};

// Pass by value
struct SalesManager storeByValue() {
    struct SalesManager sm;
    printf("Enter ID: ");
    scanf("%d", &sm.id);
    printf("Enter Name: ");
    scanf("%s", sm.name);
    printf("Enter Salary: ");
    scanf("%f", &sm.salary);
    printf("Enter Incentive: ");
    scanf("%f", &sm.incentive);
    printf("Enter Target: ");
    scanf("%f", &sm.target);
    return sm;
}

void displayByValue(struct SalesManager sm) {
    printf("\n--- SalesManager Details (Pass by Value) ---\n");
    printf("ID        : %d\n", sm.id);
    printf("Name      : %s\n", sm.name);
    printf("Salary    : %.2f\n", sm.salary);
    printf("Incentive : %.2f\n", sm.incentive);
    printf("Target    : %.2f\n", sm.target);
    printf("Total Pay : %.2f\n", sm.salary + sm.incentive);
}

// Pass by address (array)
void storeByAddress(struct SalesManager *sm, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for SalesManager %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(sm+i)->id);
        printf("Name: ");
        scanf("%s", (sm+i)->name);
        printf("Salary: ");
        scanf("%f", &(sm+i)->salary);
        printf("Incentive: ");
        scanf("%f", &(sm+i)->incentive);
        printf("Target: ");
        scanf("%f", &(sm+i)->target);
    }
}

void displayByAddress(struct SalesManager *sm, int n) {
    printf("\n--- SalesManager Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("SM %d -> ID: %d | Name: %s | Salary: %.2f | Incentive: %.2f | Target: %.2f\n",
               i+1, (sm+i)->id, (sm+i)->name, (sm+i)->salary, (sm+i)->incentive, (sm+i)->target);
    }
}

// Pass one variable by address
void storeOneByAddress(struct SalesManager *sm) {
    printf("\nEnter ID: ");
    scanf("%d", &sm->id);
    printf("Enter Name: ");
    scanf("%s", sm->name);
    printf("Enter Salary: ");
    scanf("%f", &sm->salary);
    printf("Enter Incentive: ");
    scanf("%f", &sm->incentive);
    printf("Enter Target: ");
    scanf("%f", &sm->target);
}

void displayOneByAddress(struct SalesManager *sm) {
    printf("\n--- SalesManager (Pass One by Address) ---\n");
    printf("ID        : %d\n", sm->id);
    printf("Name      : %s\n", sm->name);
    printf("Salary    : %.2f\n", sm->salary);
    printf("Incentive : %.2f\n", sm->incentive);
    printf("Target    : %.2f\n", sm->target);
    printf("Total Pay : %.2f\n", sm->salary + sm->incentive);
}

void main() {
    printf("=== Pass by Value ===\n");
    struct SalesManager sm1 = storeByValue();
    displayByValue(sm1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct SalesManager *arr = (struct SalesManager *)malloc(n * sizeof(struct SalesManager));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct SalesManager sm2;
    storeOneByAddress(&sm2);
    displayOneByAddress(&sm2);
}
