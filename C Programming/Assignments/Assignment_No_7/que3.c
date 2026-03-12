// Assignment 7 - Q1.3: Check leap year using pointer
// Type 3 function with pointer

#include <stdio.h>

void checkLeapYear(int *year) {
    if((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0))
        printf("%d is a leap year\n", *year);
    else
        printf("%d is not a leap year\n", *year);
}

int main() {
    int year = 2024;
    
    printf("=== Check Leap Year Using Pointer ===\n\n");
    checkLeapYear(&year);
    
    year = 2023;
    checkLeapYear(&year);
    
    return 0;
}