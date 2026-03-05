// Assignment 6 - Q2.1: Print 1 to 10
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

//  Without parameter, without return type
void printNumbers1() {
    printf("Numbers from 1 to 10: ");
    for(int i = 1; i <= 10; i++)
        printf("%d ", i);
    printf("\n");
}

//  With parameter, without return type
void printNumbers2(int n) {
    printf("Numbers from 1 to %d: ", n);
    for(int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
}

int main() {
    printf("=== Print Numbers - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    printNumbers1();
    
    printf("Type 2 (with param, w/o return): ");
    printNumbers2(5);
    
    return 0;
}