// Assignment 6 - Q1.4: Check vowel or consonant
// Four types of functions

#include <stdio.h>
#include <ctype.h>

//  Without parameter, without return type
void checkVowel1() {
    char ch = 'A'; // hardcoded
    ch = tolower(ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a vowel\n", ch);
    else if(isalpha(ch))
        printf("%c is a consonant\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
}

//  Without parameter, with return type
int checkVowel2() {
    char ch = 'A';
    ch = tolower(ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    else if(isalpha(ch))
        return 0;
    else
        return -1; // Not an alphabet
}

//  With parameter, without return type
void checkVowel3(char ch) {
    ch = tolower(ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a vowel\n", ch);
    else if(isalpha(ch))
        printf("%c is a consonant\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
}

//  With parameter, with return type
int checkVowel4(char ch) {
    ch = tolower(ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    else if(isalpha(ch))
        return 0;
    else
        return -1;
}

int main() {
    printf("=== Check Vowel/Consonant - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkVowel1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkVowel2();
    if(result == 1) printf("A is a vowel\n");
    else if(result == 0) printf("A is a consonant\n");
    else printf("A is not an alphabet\n");
    
    printf("Type 3 (with param, w/o return): ");
    checkVowel3('B');
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkVowel4('B');
    if(result2 == 1) printf("B is a vowel\n");
    else if(result2 == 0) printf("B is a consonant\n");
    else printf("B is not an alphabet\n");
    
    return 0;
}