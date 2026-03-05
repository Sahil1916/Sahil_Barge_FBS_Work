// Assignment 6 - Q1.10: Greatest of three numbers (Assignment 2 Q3)
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void findGreatest1() {
    int a = 10, b = 25, c = 15; // hardcoded
    int greatest;
    
    if(a > b) {
        if(a > c)
            greatest = a;
        else
            greatest = c;
    } else {
        if(b > c)
            greatest = b;
        else
            greatest = c;
    }
    
    printf("Greatest among %d, %d, %d is %d\n", a, b, c, greatest);
}

//  Without parameter, with return type
int findGreatest2() {
    int a = 10, b = 25, c = 15;
    
    if(a > b) {
        if(a > c)
            return a;
        else
            return c;
    } else {
        if(b > c)
            return b;
        else
            return c;
    }
}

//  With parameter, without return type
void findGreatest3(int a, int b, int c) {
    int greatest;
    
    if(a > b) {
        if(a > c)
            greatest = a;
        else
            greatest = c;
    } else {
        if(b > c)
            greatest = b;
        else
            greatest = c;
    }
    
    printf("Greatest among %d, %d, %d is %d\n", a, b, c, greatest);
}

//  With parameter, with return type
int findGreatest4(int a, int b, int c) {
    if(a > b) {
        if(a > c)
            return a;
        else
            return c;
    } else {
        if(b > c)
            return b;
        else
            return c;
    }
}

int main() {
    printf("=== Greatest of Three Numbers - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    findGreatest1();
    
    printf("Type 2 (w/o param, with return): ");
    int greatest = findGreatest2();
    printf("Greatest is %d\n", greatest);
    
    printf("Type 3 (with param, w/o return): ");
    findGreatest3(45, 30, 40);
    
    printf("Type 4 (with param, with return): ");
    int greatest2 = findGreatest4(45, 30, 40);
    printf("Greatest is %d\n", greatest2);
    
    return 0;
}