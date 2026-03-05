// Assignment 6 - Q1.13: Check divisibility by 3 and 5 (Assignment 2 Q6)
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void checkDivisibility1() {
    int num = 15; // hardcoded
    
    if(num % 3 == 0 && num % 5 == 0)
        printf("%d is divisible by both 3 and 5\n", num);
    else if(num % 3 == 0)
        printf("%d is divisible by 3 but not by 5\n", num);
    else if(num % 5 == 0)
        printf("%d is divisible by 5 but not by 3\n", num);
    else
        printf("%d is divisible by none\n", num);
}

//  Without parameter, with return type
int checkDivisibility2() {
    int num = 15;
    
    if(num % 3 == 0 && num % 5 == 0)
        return 3; // both
    else if(num % 3 == 0)
        return 1; // only 3
    else if(num % 5 == 0)
        return 2; // only 5
    else
        return 0; // none
}

//  With parameter, without return type
void checkDivisibility3(int num) {
    if(num % 3 == 0 && num % 5 == 0)
        printf("%d is divisible by both 3 and 5\n", num);
    else if(num % 3 == 0)
        printf("%d is divisible by 3 but not by 5\n", num);
    else if(num % 5 == 0)
        printf("%d is divisible by 5 but not by 3\n", num);
    else
        printf("%d is divisible by none\n", num);
}

// T: With parameter, with return type
int checkDivisibility4(int num) {
    if(num % 3 == 0 && num % 5 == 0)
        return 3;
    else if(num % 3 == 0)
        return 1;
    else if(num % 5 == 0)
        return 2;
    else
        return 0;
}

int main() {
    printf("=== Check Divisibility by 3 and 5 - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkDivisibility1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkDivisibility2();
    if(result == 3) printf("15 is divisible by both\n");
    else if(result == 1) printf("15 is divisible by 3 only\n");
    else if(result == 2) printf("15 is divisible by 5 only\n");
    else printf("15 is divisible by none\n");
    
    printf("Type 3 (with param, w/o return): ");
    checkDivisibility3(9);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkDivisibility4(9);
    if(result2 == 3) printf("9 is divisible by both\n");
    else if(result2 == 1) printf("9 is divisible by 3 only\n");
    else if(result2 == 2) printf("9 is divisible by 5 only\n");
    else printf("9 is divisible by none\n");
    
    return 0;
}