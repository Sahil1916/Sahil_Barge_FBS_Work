// Assignment 6 - Q1.14: Check age category (Assignment 2 Q7)
// Four types of functions

#include <stdio.h>

// Without parameter, without return type
void checkAgeCategory1() {
    int age = 25; // hardcoded
    
    if(age < 12)
        printf("Age %d: Child\n", age);
    else if(age >= 12 && age <= 19)
        printf("Age %d: Teenager\n", age);
    else if(age >= 20 && age <= 59)
        printf("Age %d: Adult\n", age);
    else
        printf("Age %d: Senior\n", age);
}

// Without parameter, with return type
char* checkAgeCategory2() {
    int age = 25;
    
    if(age < 12)
        return "Child";
    else if(age >= 12 && age <= 19)
        return "Teenager";
    else if(age >= 20 && age <= 59)
        return "Adult";
    else
        return "Senior";
}

//  With parameter, without return type
void checkAgeCategory3(int age) {
    if(age < 12)
        printf("Age %d: Child\n", age);
    else if(age >= 12 && age <= 19)
        printf("Age %d: Teenager\n", age);
    else if(age >= 20 && age <= 59)
        printf("Age %d: Adult\n", age);
    else
        printf("Age %d: Senior\n", age);
}

//  With parameter, with return type
char* checkAgeCategory4(int age) {
    if(age < 12)
        return "Child";
    else if(age >= 12 && age <= 19)
        return "Teenager";
    else if(age >= 20 && age <= 59)
        return "Adult";
    else
        return "Senior";
}

int main() {
    printf("=== Check Age Category - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkAgeCategory1();
    
    printf("Type 2 (w/o param, with return): ");
    char* category = checkAgeCategory2();
    printf("Age 25: %s\n", category);
    
    printf("Type 3 (with param, w/o return): ");
    checkAgeCategory3(65);
    
    printf("Type 4 (with param, with return): ");
    char* category2 = checkAgeCategory4(65);
    printf("Age 65: %s\n", category2);
    
    return 0;
}