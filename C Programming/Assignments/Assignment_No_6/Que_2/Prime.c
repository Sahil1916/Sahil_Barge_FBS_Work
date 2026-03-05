// Assignment 6 - Q2.4: Check prime number
// Four types of functions

#include <stdio.h>


void checkPrime1() {
    int n = 7; // hardcoded
    int i, flag = 0;
    
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0 && n > 1)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
}


int checkPrime2() {
    int n = 7;
    int i;
    
    if(n <= 1) return 0;
    
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}



void checkPrime3(int n) {
    int i, flag = 0;
    
    if(n <= 1) {
        printf("%d is not prime\n", n);
        return;
    }
    
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
}


int checkPrime4(int n) {
    int i;
    
    if(n <= 1) return 0;
    
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    printf("=== Check Prime Number - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkPrime1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkPrime2();
    printf("7 is %s\n", result ? "prime" : "not prime");
    
    printf("Type 3 (with param, w/o return): ");
    checkPrime3(12);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkPrime4(12);
    printf("12 is %s\n", result2 ? "prime" : "not prime");
    
    return 0;
}