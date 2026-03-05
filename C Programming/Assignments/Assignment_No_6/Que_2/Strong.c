// Assignment 6 - Q2.8: Check Strong number
// Four types of functions

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

// Type 1: Without parameter, without return type
void checkStrong1() {
    int n = 145; // hardcoded
    int original = n, sum = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        sum += factorial(remainder);
        n /= 10;
    }
    
    if(sum == original)
        printf("%d is strong number\n", original);
    else
        printf("%d is not strong number\n", original);
}

// Type 2: Without parameter, with return type
int checkStrong2() {
    int n = 145;
    int original = n, sum = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        sum += factorial(remainder);
        n /= 10;
    }
    
    return sum == original;
}

// Type 3: With parameter, without return type
void checkStrong3(int n) {
    int original = n, sum = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        sum += factorial(remainder);
        n /= 10;
    }
    
    if(sum == original)
        printf("%d is strong number\n", original);
    else
        printf("%d is not strong number\n", original);
}

// Type 4: With parameter, with return type
int checkStrong4(int n) {
    int original = n, sum = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        sum += factorial(remainder);
        n /= 10;
    }
    
    return sum == original;
}

int main() {
    printf("=== Check Strong Number - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkStrong1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkStrong2();
    printf("145 is %s\n", result ? "strong" : "not strong");
    
    printf("Type 3 (with param, w/o return): ");
    checkStrong3(123);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkStrong4(123);
    printf("123 is %s\n", result2 ? "strong" : "not strong");
    
    return 0;
}