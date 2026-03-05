// Assignment 6 - Q1.6: Check uppercase or lowercase
// Four types of functions

#include <stdio.h>
#include <ctype.h>

//  Without parameter, without return type
void checkCase1() {
    char ch = 'A'; // hardcoded
    
    if(isupper(ch))
        printf("%c is uppercase\n", ch);
    else if(islower(ch))
        printf("%c is lowercase\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
}

// : Without parameter, with return type
int checkCase2() {
    char ch = 'A';
    
    if(isupper(ch))
        return 1; // uppercase
    else if(islower(ch))
        return 0; // lowercase
    else
        return -1; // not alphabet
}

// With parameter, without return type
void checkCase3(char ch) {
    if(isupper(ch))
        printf("%c is uppercase\n", ch);
    else if(islower(ch))
        printf("%c is lowercase\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
}

//  With parameter, with return type
int checkCase4(char ch) {
    if(isupper(ch))
        return 1;
    else if(islower(ch))
        return 0;
    else
        return -1;
}

int main() {
    printf("=== Check Uppercase/Lowercase - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    checkCase1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = checkCase2();
    if(result == 1) printf("A is uppercase\n");
    else if(result == 0) printf("A is lowercase\n");
    else printf("A is not alphabet\n");
    
    printf("Type 3 (with param, w/o return): ");
    checkCase3('b');
    
    printf("Type 4 (with param, with return): ");
    int result2 = checkCase4('D');
    if(result2 == 1) printf("D is uppercase\n");
    else if(result2 == 0) printf("d is lowercase\n");
    else printf("d is not alphabet\n");
    
    return 0;
}