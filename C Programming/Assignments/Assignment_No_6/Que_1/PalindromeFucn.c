// Assignment 6 - Q1.2: Check 3-digit palindrome
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void checkPalindrome1() {
    int num = 121; // hardcoded
    int original = num, reversed = 0, remainder;
    
    while(num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if(original == reversed)
        printf("%d is palindrome\n", original);
    else
        printf("%d is not palindrome\n", original);
}

//  Without parameter, with return type
int checkPalindrome2() {
    int num = 121;
    int original = num, reversed = 0, remainder;
    
    while(num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

//  With parameter, without return type
void checkPalindrome3(int num) {
    int original = num, reversed = 0, remainder;
    
    while(num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if(original == reversed)
        printf("%d is palindrome\n", original);
    else
        printf("%d is not palindrome\n", original);
}

// With parameter, with return type
int checkPalindrome4(int num) {
    int original = num, reversed = 0, remainder;
    
    while(num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    printf("=== Check Palindrome - Four Function Types ===\n\n");
    
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