// Assignment 6 - Q3.3: Print perfect numbers in range
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

// Type 1: Without parameter, without return type
void printPerfect1() {
    int n = 500; // hardcoded
    printf("Perfect numbers from 1 to %d: ", n);
    
    for(int num = 1; num <= n; num++) {
        int sum = 0;
        for(int i = 1; i <= num/2; i++) {
            if(num % i == 0)
                sum += i;
        }
        if(sum == num && num != 0)
            printf("%d ", num);
    }
    printf("\n");
}

// Type 2: With parameter, without return type
void printPerfect2(int n) {
    printf("Perfect numbers from 1 to %d: ", n);
    
    for(int num = 1; num <= n; num++) {
        int sum = 0;
        for(int i = 1; i <= num/2; i++) {
            if(num % i == 0)
                sum += i;
        }
        if(sum == num && num != 0)
            printf("%d ", num);
    }
    printf("\n");
}

int main() {
    printf("=== Print Perfect Numbers - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    printPerfect1();
    
    printf("\nType 2 (with param, w/o return):\n");
    printPerfect2(100);
    
    return 0;
}