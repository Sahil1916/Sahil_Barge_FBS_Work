// Assignment 6 - Q1.8: Calculator using operator (Assignment 2 Q1)
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void calculator1() {
    int a = 10, b = 5;
    char op = '+';
    
    switch(op) {
        case '+': printf("%d + %d = %d\n", a, b, a + b); break;
        case '-': printf("%d - %d = %d\n", a, b, a - b); break;
        case '*': printf("%d * %d = %d\n", a, b, a * b); break;
        case '/': printf("%d / %d = %d\n", a, b, a / b); break;
        case '%': printf("%d %% %d = %d\n", a, b, a % b); break;
        default: printf("Invalid operator\n");
    }
}

// Without parameter, with return type
int calculator2() {
    int a = 10, b = 5;
    char op = '+';
    
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '%': return a % b;
        default: return 0;
    }
}

// With parameter, without return type
void calculator3(int a, int b, char op) {
    switch(op) {
        case '+': printf("%d + %d = %d\n", a, b, a + b); break;
        case '-': printf("%d - %d = %d\n", a, b, a - b); break;
        case '*': printf("%d * %d = %d\n", a, b, a * b); break;
        case '/': printf("%d / %d = %d\n", a, b, a / b); break;
        case '%': printf("%d %% %d = %d\n", a, b, a % b); break;
        default: printf("Invalid operator\n");
    }
}

//  With parameter, with return type
int calculator4(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '%': return a % b;
        default: return 0;
    }
}

int main() {
    printf("=== Calculator - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return): ");
    calculator1();
    
    printf("Type 2 (w/o param, with return): ");
    int result = calculator2();
    printf("10 + 5 = %d\n", result);
    
    printf("Type 3 (with param, w/o return): ");
    calculator3(15, 4, '-');
    
    printf("Type 4 (with param, with return): ");
    int result2 = calculator4(15, 4, '*');
    printf("15 * 4 = %d\n", result2);
    
    return 0;
}