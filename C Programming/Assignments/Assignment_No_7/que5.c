// Assignment 7 - Q1.5: Check voting eligibility using pointer
// Type 3 function with pointer

#include <stdio.h>

void checkVotingEligibility(int *age) {
    if(*age >= 18)
        printf("Person with age %d is eligible to vote\n", *age);
    else
        printf("Person with age %d is not eligible to vote\n", *age);
}

int main() {
    int age = 20;
    
    printf("=== Check Voting Eligibility Using Pointer ===\n\n");
    checkVotingEligibility(&age);
    
    age = 16;
    checkVotingEligibility(&age);
    
    return 0;
}