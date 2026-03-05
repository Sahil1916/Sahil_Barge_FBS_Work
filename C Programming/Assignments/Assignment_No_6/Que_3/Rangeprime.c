// Assignment 6 - Q3.2: Print prime numbers in range
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

// Type 1: Without parameter, without return type
void printPrimes1() {
    int n = 50; // hardcoded
    printf("Prime numbers from 1 to %d: ", n);
    
    for(int num = 2; num <= n; num++) {
        int isPrime = 1;
        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", num);
    }
    printf("\n");
}

// Type 2: With parameter, without return type
void printPrimes2(int n) {
    printf("Prime numbers from 1 to %d: ", n);
    
    for(int num = 2; num <= n; num++) {
        int isPrime = 1;
        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", num);
    }
    printf("\n");
}

int main() {
    printf("=== Print Prime Numbers - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    printPrimes1();
    
    printf("\nType 2 (with param, w/o return):\n");
    printPrimes2(30);
    
    return 0;
}