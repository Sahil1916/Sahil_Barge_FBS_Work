// Assignment 7 - Q1.4: Check vowel or consonant using pointer
// Type 3 function with pointer

#include <stdio.h>
#include <ctype.h>

void checkVowelConsonant(char *ch) {
    char c = tolower(*ch);
    
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("%c is a vowel\n", *ch);
    else if(isalpha(*ch))
        printf("%c is a consonant\n", *ch);
    else
        printf("%c is not an alphabet\n", *ch);
}

int main() {
    char character = 'A';
    
    printf("=== Check Vowel/Consonant Using Pointer ===\n\n");
    checkVowelConsonant(&character);
    
    character = 'B';
    checkVowelConsonant(&character);
    
    character = '5';
    checkVowelConsonant(&character);
    
    return 0;
}