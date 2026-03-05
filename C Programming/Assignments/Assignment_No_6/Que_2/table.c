// Assignment 6 - Q2.2: Print multiplication table
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

//  Without parameter, without return type
void printTable1() {
    int n = 5; // hardcoded
    printf("Table of %d: ", n);
    for(int i = 1; i <= 10; i++)
        printf("%d \n", n * i);
    printf("\n");
}

//  With parameter, without return type
void printTable2(int n) {
    printf("Table of %d: \n", n);
    for(int i = 1; i <= 10; i++)
        printf("%d \n", n * i);
    printf("\n");
}

int main() {
    printf("=== Print Multiplication Table - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    printTable1();
    
    printf("Type 2 (with param, w/o return): ");
    printTable2(7);
    
    return 0;
}