// Assignment 6 - Q1.1: Check even or odd
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void checkEvenOdd1() {
    int num = 10; // hardcoded
    if(num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
}

//  Without parameter, with return type
int checkEvenOdd2() {
    int num = 10;
    return num % 2 == 0 ? 1 : 0;
}

//  With parameter, without return type
void checkEvenOdd3(int num) {
    if(num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
}

// With parameter, with return type
int checkEvenOdd4(int num) {
    return num % 2 == 0 ? 1 : 0;
}

int main() {
    printf("=== Check Even or Odd - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkEvenOdd1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkEvenOdd2();
    printf("10 is %s\n", result ? "even" : "odd");
    
    printf("Type 3 (with param, w/o return): ");
    checkEvenOdd3(7);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkEvenOdd4(7);
    printf("7 is %s\n", result2 ? "even" : "odd");
    
    return 0;
}