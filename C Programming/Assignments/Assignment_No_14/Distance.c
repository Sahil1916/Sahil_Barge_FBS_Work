#include <stdio.h>
#include <stdlib.h>

struct Distance {
    int feet;
    float inch;
};

// Pass by value
struct Distance storeByValue() {
    struct Distance d;
    printf("Enter Distance (feet inch): ");
    scanf("%d %f", &d.feet, &d.inch);
    return d;
}

void displayByValue(struct Distance d) {
    printf("\n--- Distance Details (Pass by Value) ---\n");
    printf("Distance : %d feet %.2f inches\n", d.feet, d.inch);
    printf("In inches: %.2f inches\n", d.feet * 12.0 + d.inch);
}

// Pass by address (array)
void storeByAddress(struct Distance *d, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Distance %d (feet inch): ", i + 1);
        scanf("%d %f", &(d+i)->feet, &(d+i)->inch);
    }
}

void displayByAddress(struct Distance *d, int n) {
    printf("\n--- Distance Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Distance %d : %d feet %.2f inches\n",
               i+1, (d+i)->feet, (d+i)->inch);
    }
}

// Pass one variable by address
void storeOneByAddress(struct Distance *d) {
    printf("\nEnter Distance (feet inch): ");
    scanf("%d %f", &d->feet, &d->inch);
}

void displayOneByAddress(struct Distance *d) {
    printf("\n--- Distance (Pass One by Address) ---\n");
    printf("Distance : %d feet %.2f inches\n", d->feet, d->inch);
    printf("In inches: %.2f inches\n", d->feet * 12.0 + d->inch);
}

void main() {
    printf("=== Pass by Value ===\n");
    struct Distance d1 = storeByValue();
    displayByValue(d1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct Distance *arr = (struct Distance *)malloc(n * sizeof(struct Distance));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct Distance d2;
    storeOneByAddress(&d2);
    displayOneByAddress(&d2);
}
