// Assignment 6 - Q2.10: Sum of first and last digit
// Four types of functions

#include <stdio.h>

// Type 1: Without parameter, without return type
void sumFirstLast1() {
    int n = 12345; // hardcoded
    int lastDigit = n % 10;
    int firstDigit;
    int temp = n;
    
    while(temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    
    printf("Number: %d\n", n);
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum = %d\n", firstDigit + lastDigit);
}

// Type 2: Without parameter, with return type
int sumFirstLast2() {
    int n = 12345;
    int lastDigit = n % 10;
    int firstDigit;
    int temp = n;
    
    while(temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    
    return firstDigit + lastDigit;
}

// Type 3: With parameter, without return type
void sumFirstLast3(int n) {
    int lastDigit = n % 10;
    int firstDigit;
    int temp = n;
    
    while(temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    
    printf("Number: %d\n", n);
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum = %d\n", firstDigit + lastDigit);
}

// Type 4: With parameter, with return type
int sumFirstLast4(int n) {
    int lastDigit = n % 10;
    int firstDigit;
    int temp = n;
    
    while(temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    
    return firstDigit + lastDigit;
}

int main() {
    printf("=== Sum of First and Last Digit - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    sumFirstLast1();
    
    printf("\nType 2 (w/o param, with return):\n");
    int sum = sumFirstLast2();
    printf("Sum of first and last digit of 12345 = %d\n", sum);
    
    printf("\nType 3 (with param, w/o return):\n");
    sumFirstLast3(6789);
    
    printf("\nType 4 (with param, with return):\n");
    int sum2 = sumFirstLast4(6789);
    printf("Sum of first and last digit of 6789 = %d\n", sum2);
    
    return 0;
}