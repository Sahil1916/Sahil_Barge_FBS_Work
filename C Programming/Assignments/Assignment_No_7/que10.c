// Assignment 7 - Q1.10: Greatest of three numbers using pointer
// Type 3 function with pointer

#include <stdio.h>

void findGreatest(int *a, int *b, int *c) {
    int greatest;
    
    if(*a > *b) {
        if(*a > *c)
            greatest = *a;
        else
            greatest = *c;
    } else {
        if(*b > *c)
            greatest = *b;
        else
            greatest = *c;
    }
    
    printf("Greatest among %d, %d, %d is %d\n", *a, *b, *c, greatest);
}

int main() {
    int x = 10, y = 25, z = 15;
    
    printf("=== Greatest of Three Numbers Using Pointer ===\n\n");
    findGreatest(&x, &y, &z);
    
    x = 45; y = 30; z = 40;
    findGreatest(&x, &y, &z);
    
    return 0;
}