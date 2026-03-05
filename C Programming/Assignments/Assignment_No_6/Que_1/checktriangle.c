// Assignment 6 - Q1.9: Check triangle type (Assignment 2 Q2)
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void checkTriangle1() {
    int a = 5, b = 5, c = 5; // hardcoded
    
    if(a + b > c && b + c > a && a + c > b) {
        if(a == b && b == c)
            printf("Equilateral triangle\n");
        else if(a == b || b == c || a == c)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");
    } else {
        printf("Invalid triangle\n");
    }
}

//  Without parameter, with return type
int checkTriangle2() {
    int a = 5, b = 5, c = 3;
    
    if(a + b > c && b + c > a && a + c > b) {
        if(a == b && b == c)
            return 1; // Equilateral
        else if(a == b || b == c || a == c)
            return 2; // Isosceles
        else
            return 3; // Scalene
    } else {
        return 0; // Invalid
    }
}

//  With parameter, without return type
void checkTriangle3(int a, int b, int c) {
    if(a + b > c && b + c > a && a + c > b) {
        if(a == b && b == c)
            printf("Equilateral triangle\n");
        else if(a == b || b == c || a == c)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");
    } else {
        printf("Invalid triangle\n");
    }
}

//  With parameter, with return type
int checkTriangle4(int a, int b, int c) {
    if(a + b > c && b + c > a && a + c > b) {
        if(a == b && b == c)
            return 1;
        else if(a == b || b == c || a == c)
            return 2;
        else
            return 3;
    } else {
        return 0;
    }
}

int main() {
    printf("=== Check Triangle Type - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkTriangle1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkTriangle2();
    if(result == 1) printf("Equilateral triangle\n");
    else if(result == 2) printf("Isosceles triangle\n");
    else if(result == 3) printf("Scalene triangle\n");
    else printf("Invalid triangle\n");
    
    printf("Type 3 (with param, w/o return): ");
    checkTriangle3(5, 4, 3);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkTriangle4(5, 4, 3);
    if(result2 == 1) printf("Equilateral triangle\n");
    else if(result2 == 2) printf("Isosceles triangle\n");
    else if(result2 == 3) printf("Scalene triangle\n");
    else printf("Invalid triangle\n");
    
    return 0;
}