#include <stdio.h>
#include <stdlib.h>

struct Time {
    int hour;
    int min;
    int sec;
};

// Pass by value
struct Time storeByValue() {
    struct Time t;
    printf("Enter Time (HH MM SS): ");
    scanf("%d %d %d", &t.hour, &t.min, &t.sec);
    return t;
}

void displayByValue(struct Time t) {
    printf("\n--- Time Details (Pass by Value) ---\n");
    printf("Time : %02d : %02d : %02d\n", t.hour, t.min, t.sec);
}

// Pass by address (array)
void storeByAddress(struct Time *t, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Time %d (HH MM SS): ", i + 1);
        scanf("%d %d %d", &(t+i)->hour, &(t+i)->min, &(t+i)->sec);
    }
}

void displayByAddress(struct Time *t, int n) {
    printf("\n--- Time Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Time %d : %02d : %02d : %02d\n",
               i+1, (t+i)->hour, (t+i)->min, (t+i)->sec);
    }
}

// Pass one variable by address
void storeOneByAddress(struct Time *t) {
    printf("\nEnter Time (HH MM SS): ");
    scanf("%d %d %d", &t->hour, &t->min, &t->sec);
}

void displayOneByAddress(struct Time *t) {
    printf("\n--- Time (Pass One by Address) ---\n");
    printf("Time : %02d : %02d : %02d\n", t->hour, t->min, t->sec);
}

void main() {
    printf("=== Pass by Value ===\n");
    struct Time t1 = storeByValue();
    displayByValue(t1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct Time *arr = (struct Time *)malloc(n * sizeof(struct Time));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct Time t2;
    storeOneByAddress(&t2);
    displayOneByAddress(&t2);
}
