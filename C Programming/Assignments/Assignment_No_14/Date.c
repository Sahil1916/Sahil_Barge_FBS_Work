#include <stdio.h>
#include <stdlib.h>

struct Date {
    int date;
    int month;
    int year;
};

// Pass by value
struct Date storeByValue() {
    struct Date d;
    printf("Enter Date (DD MM YYYY): ");
    scanf("%d %d %d", &d.date, &d.month, &d.year);
    return d;
}

void displayByValue(struct Date d) {
    printf("\n--- Date Details (Pass by Value) ---\n");
    printf("Date  : %02d / %02d / %04d\n", d.date, d.month, d.year);
}

// Pass by address (array)
void storeByAddress(struct Date *d, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Date %d (DD MM YYYY): ", i + 1);
        scanf("%d %d %d", &(d+i)->date, &(d+i)->month, &(d+i)->year);
    }
}

void displayByAddress(struct Date *d, int n) {
    printf("\n--- Date Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Date %d : %02d / %02d / %04d\n",
               i+1, (d+i)->date, (d+i)->month, (d+i)->year);
    }
}

// Pass one variable by address
void storeOneByAddress(struct Date *d) {
    printf("\nEnter Date (DD MM YYYY): ");
    scanf("%d %d %d", &d->date, &d->month, &d->year);
}

void displayOneByAddress(struct Date *d) {
    printf("\n--- Date (Pass One by Address) ---\n");
    printf("Date : %02d / %02d / %04d\n", d->date, d->month, d->year);
}

void main() {
    printf("=== Pass by Value ===\n");
    struct Date d1 = storeByValue();
    displayByValue(d1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct Date *arr = (struct Date *)malloc(n * sizeof(struct Date));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct Date d2;
    storeOneByAddress(&d2);
    displayOneByAddress(&d2);
}
