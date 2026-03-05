// Assignment 6 - Q1.7: Calculate salary based on basic
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void calculateSalary1() {
    float basic = 6000; // hardcoded
    float da, ta, hra, total;
    
    if(basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }
    
    total = basic + da + ta + hra;
    printf("Basic: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total);
}

//  Without parameter, with return type
float calculateSalary2() {
    float basic = 4000;
    float da, ta, hra;
    
    if(basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }
    
    return basic + da + ta + hra;
}

// : With parameter, without return type
void calculateSalary3(float basic) {
    float da, ta, hra, total;
    
    if(basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }
    
    total = basic + da + ta + hra;
    printf("Basic: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total);
}

//  With parameter, with return type
float calculateSalary4(float basic) {
    float da, ta, hra;
    
    if(basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }
    
    return basic + da + ta + hra;
}

int main() {
    printf("=== Calculate Salary - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    calculateSalary1();
    
    printf("\nType 2 (w/o param, with return):\n");
    float total = calculateSalary2();
    printf("Total Salary for basic 4000: %.2f\n", total);
    
    printf("\nType 3 (with param, w/o return):\n");
    calculateSalary3(6000);
    
    printf("\nType 4 (with param, with return):\n");
    float total2 = calculateSalary4(6000);
    printf("Total Salary for basic 6000: %.2f\n", total2);
    
    return 0;
}