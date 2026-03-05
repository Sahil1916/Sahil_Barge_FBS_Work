// Assignment 6 - Q1.3: Check leap year
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void checkLeapYear1() {
    int year = 2024; // hardcoded
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

//  Without parameter, with return type
int checkLeapYear2() {
    int year = 2024;
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

//  With parameter, without return type
void checkLeapYear3(int year) {
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

//  With parameter, with return type
int checkLeapYear4(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    printf("=== Check Leap Year - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkLeapYear1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkLeapYear2();
    printf("2024 is %s\n", result ? "leap year" : "not leap year");
    
    printf("Type 3 (with param, w/o return): ");
    checkLeapYear3(2023);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkLeapYear4(2023);
    printf("2023 is %s\n", result2 ? "leap year" : "not leap year");
    
    return 0;
}