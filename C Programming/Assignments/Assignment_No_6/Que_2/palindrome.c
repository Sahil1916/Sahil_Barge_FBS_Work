// Assignment 6 - Q2.9: Check Palindrome number
// Four types of functions

#include <stdio.h>

// Type 1: Without parameter, without return type
void checkPalindrome1() {
    int n = 121; // hardcoded
    int original = n, reversed = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if(original == reversed)
        printf("%d is palindrome\n", original);
    else
        printf("%d is not palindrome\n", original);
}


int checkPalindrome2() {
    int n = 121;
    int original = n, reversed = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return original == reversed;
}


void checkPalindrome3(int n) {
    int original = n, reversed = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if(original == reversed)
        printf("%d is palindrome\n", original);
    else
        printf("%d is not palindrome\n", original);
}


int checkPalindrome4(int n) {
    int original = n, reversed = 0, remainder;
    
    while(n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return original == reversed;
}

int main() {
    printf("=== Check Palindrome Number - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkPalindrome1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkPalindrome2();
    printf("121 is %s\n", result ? "palindrome" : "not palindrome");
    
    printf("Type 3 (with param, w/o return): ");
    checkPalindrome3(123);
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkPalindrome4(123);
    printf("123 is %s\n", result2 ? "palindrome" : "not palindrome");
    
    return 0;
}