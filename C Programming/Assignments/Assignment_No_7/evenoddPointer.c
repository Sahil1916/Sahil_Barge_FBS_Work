// Assignment 7 - Q1.1: Check even or odd using pointer
// Type 3 function with pointer

#include <stdio.h>

void checkEvenOdd(int *num) {
    if(*num % 2 == 0)
        printf("%d is even\n", *num);
    else
        printf("%d is odd\n", *num);
}

int main() {
    int number = 10;
    
    printf("=== Check Even or Odd Using Pointer ===\n\n");
    checkEvenOdd(&number);
    
    number = 7;
    checkEvenOdd(&number);
    
    return 0;
}