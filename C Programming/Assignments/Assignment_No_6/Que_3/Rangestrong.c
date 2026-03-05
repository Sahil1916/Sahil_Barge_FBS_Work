// Assignment 6 - Q3.4: Print strong numbers in range
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

// Type 1: Without parameter, without return type
void printStrong1() {
    int n = 100000; // hardcoded
    printf("Strong numbers from 1 to %d: ", n);
    
    for(int num = 1; num <= n; num++) {
        int original = num, sum = 0, remainder;
        int temp = num;
        
        while(temp > 0) {
            remainder = temp % 10;
            sum += factorial(remainder);
            temp /= 10;
        }
        
        if(sum == original)
            printf("%d ", original);
    }
    printf("\n");
}

// Type 2: With parameter, without return type
void printStrong2(int n) {
    printf("Strong numbers from 1 to %d: ", n);
    
    for(int num = 1; num <= n; num++) {
        int original = num, sum = 0, remainder;
        int temp = num;
        
        while(temp > 0) {
            remainder = temp % 10;
            sum += factorial(remainder);
            temp /= 10;
        }
        
        if(sum == original)
            printf("%d ", original);
    }
    printf("\n");
}

int main() {
    printf("=== Print Strong Numbers - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    printStrong1();
    
    printf("\nType 2 (with param, w/o return):\n");
    printStrong2(100000);
    
    return 0;
}