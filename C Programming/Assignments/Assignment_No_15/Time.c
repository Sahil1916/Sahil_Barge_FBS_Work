#include <stdio.h>
#include <stdlib.h>

struct Time {
    int hrs;
    int min;
    int sec;
};

void acceptTime(struct Time *t, int num) {
    printf("\nEnter Time %d (hrs min sec): ", num);
    scanf("%d %d %d", &t->hrs, &t->min, &t->sec);
}

void displayTime(struct Time t, char *label) {
    printf("%s : %02d : %02d : %02d\n", label, t.hrs, t.min, t.sec);
}

// Add two time variables and handle carry
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;

    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;  // carry from sec
    result.hrs = t1.hrs + t2.hrs + result.min / 60;  // carry from min

    result.sec = result.sec % 60;
    result.min = result.min % 60;

    return result;
}

// Convert time to total seconds
int toSeconds(struct Time t) {
    return t.hrs * 3600 + t.min * 60 + t.sec;
}

void main() {
    struct Time t1, t2, result;

    printf("===== Time Addition Program =====\n");
    acceptTime(&t1, 1);
    acceptTime(&t2, 2);

    printf("\n--- Time Values ---\n");
    displayTime(t1, "Time 1");
    displayTime(t2, "Time 2");

    result = addTime(t1, t2);
    displayTime(result, "Result");

    printf("\n--- Conversion to Seconds ---\n");
    printf("Time 1 = %d seconds\n", toSeconds(t1));
    printf("Time 2 = %d seconds\n", toSeconds(t2));
    printf("Result = %d seconds\n", toSeconds(result));
}
