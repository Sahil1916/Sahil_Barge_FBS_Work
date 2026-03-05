// Assignment 6 - Q2.7: Find factorial
// Four types of functions

#include <stdio.h>

// Type 1: Without parameter, without return type
void factorial1() {
    int n = 5; // hardcoded
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
        fact *= i;
    
    printf("Factorial of %d = %d\n", n, fact);
}

// Type 2: Without parameter, with return type
int factorial2() {
    int n = 5;
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
        fact *= i;
    
    return fact;
}


void factorial3(int n) {
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
        fact *= i;
    
    printf("Factorial of %d = %d\n", n, fact);
}


int factorial4(int n) {
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
        fact *= i;
    
    return fact;
}

int main() {
    printf("=== Find Factorial - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    factorial1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = factorial2();
    printf("Factorial of 5 = %d\n", result);
    
    printf("Type 3 (with param, w/o return): ");
    factorial3(6);
    
    printf("Type 4 (with param, with return): ");
    int result2 = factorial4(6);
    printf("Factorial of 6 = %d\n", result2);
    
    return 0;
}