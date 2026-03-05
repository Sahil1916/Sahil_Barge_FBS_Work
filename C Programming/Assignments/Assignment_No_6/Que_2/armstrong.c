// Assignment 6 - Q2.5: Check Armstrong number
// Four types of functions

#include <stdio.h>
#include <math.h>

// Type 1: Without parameter, without return type
void checkArmstrong1() {
    int n = 153; // hardcoded
    int original = n, sum = 0, remainder, digits = 0;
    int temp = n;
    
    // Count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp > 0) {
        remainder = temp % 10;
        int power = 1;
        for(int i = 1; i <= digits; i++)
            power *= remainder;
        sum += power;
        temp /= 10;
    }
    
    if(sum == original)
        printf("%d is Armstrong number\n", original);
    else
        printf("%d is not Armstrong number\n", original);
}

// Type 2: Without parameter, with return type
int checkArmstrong2() {
    int n = 153;
    int original = n, sum = 0, remainder, digits = 0;
    int temp = n;
    
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp > 0) {
        remainder = temp % 10;
        int power = 1;
        for(int i = 1; i <= digits; i++)
            power *= remainder;
        sum += power;
        temp /= 10;
    }
    
    return sum == original;
}

// Type 3: With parameter, without return type
void checkArmstrong3(int n) {
    int original = n, sum = 0, remainder, digits = 0;
    int temp = n;
    
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp > 0) {
        remainder = temp % 10;
        int power = 1;
        for(int i = 1; i <= digits; i++)
            power *= remainder;
        sum += power;
        temp /= 10;
    }
    
    if(sum == original)
        printf("%d is Armstrong number\n", original);
    else
        printf("%d is not Armstrong number\n", original);
}

// Type 4: With parameter, with return type
int checkArmstrong4(int n) {
    int original = n, sum = 0, remainder, digits = 0;
    int temp = n;
    
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp > 0) {
        remainder = temp % 10;
        int power = 1;
        for(int i = 1; i <= digits; i++)
            power *= remainder;
        sum += power;
        temp /= 10;
    }
    
    return sum == original;
}

int main() {
    printf("=== Check Armstrong Number - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkArmstrong1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkArmstrong2();
    printf("153 is %s\n", result ? "Armstrong" : "not Armstrong");
    
    printf("Type 3 (with param, w/o return): ");
    checkArmstrong3(123);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkArmstrong4(123);
    printf("123 is %s\n", result2 ? "Armstrong" : "not Armstrong");
    
    return 0;
}