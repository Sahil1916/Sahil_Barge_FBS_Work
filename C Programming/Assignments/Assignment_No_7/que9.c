
// Assignment 7 - Q1.9: Check triangle type using pointer
// Type 3 function with pointer

#include <stdio.h>

void checkTriangle(int *a, int *b, int *c) {
    if(*a + *b > *c && *b + *c > *a && *a + *c > *b) {
        if(*a == *b && *b == *c)
            printf("Triangle with sides %d, %d, %d is Equilateral\n", *a, *b, *c);
        else if(*a == *b || *b == *c || *a == *c)
            printf("Triangle with sides %d, %d, %d is Isosceles\n", *a, *b, *c);
        else
            printf("Triangle with sides %d, %d, %d is Scalene\n", *a, *b, *c);
    } else {
        printf("Sides %d, %d, %d do not form a valid triangle\n", *a, *b, *c);
    }
}

int main() {
    int s1 = 5, s2 = 5, s3 = 5;
    
    printf("=== Check Triangle Type Using Pointer ===\n\n");
    checkTriangle(&s1, &s2, &s3);
    
    s1 = 5; s2 = 5; s3 = 3;
    checkTriangle(&s1, &s2, &s3);
    
    s1 = 5; s2 = 4; s3 = 3;
    checkTriangle(&s1, &s2, &s3);
    
    s1 = 1; s2 = 1; s3 = 3;
    checkTriangle(&s1, &s2, &s3);
    
    return 0;
}