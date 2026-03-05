// Assignment 6 - Q1.11: Grade based on marks (Assignment 2 Q4)
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void showGrade1() {
    int marks = 80; // hardcoded
    
    if(marks > 75)
        printf("Marks %d: Distinction\n", marks);
    else if(marks > 65)
        printf("Marks %d: First Class\n", marks);
    else if(marks > 55)
        printf("Marks %d: Second Class\n", marks);
    else if(marks >= 40)
        printf("Marks %d: Pass Class\n", marks);
    else
        printf("Marks %d: Fail\n", marks);
}

//  Without parameter, with return type
char* showGrade2() {
    int marks = 80;
    
    if(marks > 75)
        return "Distinction";
    else if(marks > 65)
        return "First Class";
    else if(marks > 55)
        return "Second Class";
    else if(marks >= 40)
        return "Pass Class";
    else
        return "Fail";
}

//  With parameter, without return type
void showGrade3(int marks) {
    if(marks > 75)
        printf("Marks %d: Distinction\n", marks);
    else if(marks > 65)
        printf("Marks %d: First Class\n", marks);
    else if(marks > 55)
        printf("Marks %d: Second Class\n", marks);
    else if(marks >= 40)
        printf("Marks %d: Pass Class\n", marks);
    else
        printf("Marks %d: Fail\n", marks);
}

//  With parameter, with return type
char* showGrade4(int marks) {
    if(marks > 75)
        return "Distinction";
    else if(marks > 65)
        return "First Class";
    else if(marks > 55)
        return "Second Class";
    else if(marks >= 40)
        return "Pass Class";
    else
        return "Fail";
}

int main() {
    printf("=== Grade Based on Marks - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    showGrade1();
    
    printf("Type 2 (w/o param, with return): ");
    char* grade = showGrade2();
    printf("Marks 80: %s\n", grade);
    
    printf("Type 3 (with param, w/o return): ");
    showGrade3(62);
    
    printf("Type 4 (with param, with return): ");
    char* grade2 = showGrade4(62);
    printf("Marks 62: %s\n", grade2);
    
    return 0;
}