// Assignment 6 - Q3.1: Print Armstrong numbers in range
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

// Type 1: Without parameter, without return type
void printArmstrong1() {
    int n = 1000; // hardcoded
    printf("Armstrong numbers from 1 to %d: ", n);
    
    for(int num = 1; num <= n; num++) {
        int original = num, sum = 0, remainder, digits = 0;
        int temp = num;
        
        // Count digits
        while(temp > 0) {
            digits++;
            temp /= 10;
        }
        
        temp = num;
        while(temp > 0) {
            remainder = temp % 10;
            int power = 1;
            for(int i = 1; i <= digits; i++)
                power *= remainder;
            sum += power;
            temp /= 10;
        }
        
        if(sum == original)
            printf("%d ", original);
    }
    printf("\n");
}

// Type 2: With parameter, without return type
void printArmstrong2(int n) {
    printf("Armstrong numbers from 1 to %d: ", n);
    
    for(int num = 1; num <= n; num++) {
        int original = num, sum = 0, remainder, digits = 0;
        int temp = num;
        
        while(temp > 0) {
            digits++;
            temp /= 10;
        }
        
        temp = num;
        while(temp > 0) {
            remainder = temp % 10;
            int power = 1;
            for(int i = 1; i <= digits; i++)
                power *= remainder;
            sum += power;
            temp /= 10;
        }
        
        if(sum == original)
            printf("%d ", original);
    }
    printf("\n");
}

int main() {
    printf("=== Print Armstrong Numbers - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    printArmstrong1();
    
    printf("\nType 2 (with param, w/o return):\n");
    printArmstrong2(500);
    
    return 0;
}