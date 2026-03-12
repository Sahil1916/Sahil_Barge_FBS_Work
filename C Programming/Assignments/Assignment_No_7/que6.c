// Assignment 7 - Q1.6: Check uppercase or lowercase using pointer
// Type 3 function with pointer

#include <stdio.h>
#include <ctype.h>

void checkCase(char *ch) {
    if(isupper(*ch))
        printf("%c is uppercase\n", *ch);
    else if(islower(*ch))
        printf("%c is lowercase\n", *ch);
    else
        printf("%c is not an alphabet\n", *ch);
}

int main() {
    char character = 'A';
    
    printf("=== Check Uppercase/Lowercase Using Pointer ===\n\n");
    checkCase(&character);
    
    character = 'b';
    checkCase(&character);
    
    character = '5';
    checkCase(&character);
    
    return 0;
}