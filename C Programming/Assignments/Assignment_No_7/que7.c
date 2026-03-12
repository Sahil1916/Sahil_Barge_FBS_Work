// Assignment 7 - Q1.7: Calculate salary using pointer
// Type 3 function with pointer

#include <stdio.h>

void calculateSalary(float *basic) {
    float da, ta, hra, total;
    
    if(*basic <= 5000) {
        da = *basic * 0.10;
        ta = *basic * 0.20;
        hra = *basic * 0.25;
    } else {
        da = *basic * 0.15;
        ta = *basic * 0.25;
        hra = *basic * 0.30;
    }
    
    total = *basic + da + ta + hra;
    
    printf("Basic Salary: %.2f\n", *basic);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total);
    printf("------------------------\n");
}

int main() {
    float salary = 4000;
    
    printf("=== Calculate Salary Using Pointer ===\n\n");
    calculateSalary(&salary);
    
    salary = 6000;
    calculateSalary(&salary);
    
    return 0;
}