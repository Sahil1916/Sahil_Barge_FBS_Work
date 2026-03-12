
// Assignment 7 - Q1.2: Check 3-digit palindrome using pointer
// Type 3 function with pointer

#include <stdio.h>

void checkPalindrome(int *num) {
    int original = *num;
    int reversed = 0, remainder;
    int temp = *num;
    
    while(temp > 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }
    
    if(original == reversed)
        printf("%d is palindrome\n", original);
    else
        printf("%d is not palindrome\n", original);
}

int main() {
    int number = 121;
    
    printf("=== Check Palindrome Using Pointer ===\n\n");
    checkPalindrome(&number);
    
    number = 123;
    checkPalindrome(&number);
    
    return 0;
}