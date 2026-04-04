#include <stdio.h>
#include <stdlib.h>

struct Complex {
    float real;
    float imaginary;
};

// Pass by value
struct Complex storeByValue() {
    struct Complex c;
    printf("Enter Real part: ");
    scanf("%f", &c.real);
    printf("Enter Imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

void displayByValue(struct Complex c) {
    printf("\n--- Complex Number (Pass by Value) ---\n");
    if (c.imaginary >= 0)
        printf("Complex : %.2f + %.2fi\n", c.real, c.imaginary);
    else
        printf("Complex : %.2f %.2fi\n", c.real, c.imaginary);
}

// Pass by address (array)
void storeByAddress(struct Complex *c, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter Complex Number %d:\n", i + 1);
        printf("Real: ");
        scanf("%f", &(c+i)->real);
        printf("Imaginary: ");
        scanf("%f", &(c+i)->imaginary);
    }
}

void displayByAddress(struct Complex *c, int n) {
    printf("\n--- Complex Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        if ((c+i)->imaginary >= 0)
            printf("C%d : %.2f + %.2fi\n", i+1, (c+i)->real, (c+i)->imaginary);
        else
            printf("C%d : %.2f %.2fi\n", i+1, (c+i)->real, (c+i)->imaginary);
    }
}

// Pass one variable by address
void storeOneByAddress(struct Complex *c) {
    printf("\nEnter Real part: ");
    scanf("%f", &c->real);
    printf("Enter Imaginary part: ");
    scanf("%f", &c->imaginary);
}

void displayOneByAddress(struct Complex *c) {
    printf("\n--- Complex Number (Pass One by Address) ---\n");
    if (c->imaginary >= 0)
        printf("Complex : %.2f + %.2fi\n", c->real, c->imaginary);
    else
        printf("Complex : %.2f %.2fi\n", c->real, c->imaginary);
}

// Bonus: Add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

void main() {
    printf("=== Pass by Value ===\n");
    struct Complex c1 = storeByValue();
    displayByValue(c1);

    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct Complex *arr = (struct Complex *)malloc(n * sizeof(struct Complex));
    storeByAddress(arr, n);
    displayByAddress(arr, n);

    printf("\nSum of above two complex numbers:\n");
    struct Complex sum = addComplex(arr[0], arr[1]);
    displayByValue(sum);
    free(arr);

    printf("\n=== Pass One Variable by Address ===\n");
    struct Complex c2;
    storeOneByAddress(&c2);
    displayOneByAddress(&c2);
}
