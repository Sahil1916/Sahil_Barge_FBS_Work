// Assignment 6 - Q1.5: Check voting eligibility
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void checkVotingEligibility1() {
    int age = 20; // hardcoded
    
    if(age >= 18)
        printf("Person with age %d is eligible to vote\n", age);
    else
        printf("Person with age %d is not eligible to vote\n", age);
}

//  Without parameter, with return type
int checkVotingEligibility2() {
    int age = 20;
    return age >= 18 ? 1 : 0;
}

//  With parameter, without return type
void checkVotingEligibility3(int age) {
    if(age >= 18)
        printf("Person with age %d is eligible to vote\n", age);
    else
        printf("Person with age %d is not eligible to vote\n", age);
}

//With parameter, with return type
int checkVotingEligibility4(int age) {
    return age >= 18 ? 1 : 0;
}

int main() {
    printf("=== Check Voting Eligibility - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkVotingEligibility1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkVotingEligibility2();
    printf("Age 20 is %s\n", result ? "eligible" : "not eligible");
    
    printf("Type 3 (with param, w/o return): ");
    checkVotingEligibility3(16);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkVotingEligibility4(16);
    printf("Age 16 is %s\n", result2 ? "eligible" : "not eligible");
    
    return 0;
}