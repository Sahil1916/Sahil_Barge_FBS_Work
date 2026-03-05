// Assignment 6 - Q2.6: Check Perfect number
// Four types of functions

#include <stdio.h>

// Type 1: Without parameter, without return type
void checkPerfect1() {
    int n = 28; // hardcoded
    int sum = 0;
    
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    
    if(sum == n && n != 0)
        printf("%d is perfect number\n", n);
    else
        printf("%d is not perfect number\n", n);
}

// Type 2: Without parameter, with return type
int checkPerfect2() {
    int n = 28;
    int sum = 0;
    
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    
    return (sum == n && n != 0);
}

// Type 3: With parameter, without return type
void checkPerfect3(int n) {
    int sum = 0;
    
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    
    if(sum == n && n != 0)
        printf("%d is perfect number\n", n);
    else
        printf("%d is not perfect number\n", n);
}

// Type 4: With parameter, with return type
int checkPerfect4(int n) {
    int sum = 0;
    
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    
    return (sum == n && n != 0);
}

int main() {
    printf("=== Check Perfect Number - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkPerfect1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkPerfect2();
    printf("28 is %s\n", result ? "perfect" : "not perfect");
    
    printf("Type 3 (with param, w/o return): ");
    checkPerfect3(12);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkPerfect4(12);
    printf("12 is %s\n", result2 ? "perfect" : "not perfect");
    
    return 0;
}