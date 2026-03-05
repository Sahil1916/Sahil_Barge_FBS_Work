// Assignment 6 - Q2.3: Sum of numbers in range
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

//  Without parameter, without return type
void sumInRange1() {
    int start = 1, end = 5; // hardcoded
    int sum = 0;
    
    for(int i = start; i <= end; i++)
        sum += i;
    
    printf("Sum from %d to %d = %d\n", start, end, sum);
}

// : With parameter, without return type
void sumInRange2(int start, int end) {
    int sum = 0;
    
    for(int i = start; i <= end; i++)
        sum += i;
    
    printf("Sum from %d to %d = %d\n", start, end, sum);
}

int main() {
    printf("=== Sum in Range - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    sumInRange1();
    
    printf("Type 2 (with param, w/o return): ");
    sumInRange2(1, 10);
    
    return 0;
}