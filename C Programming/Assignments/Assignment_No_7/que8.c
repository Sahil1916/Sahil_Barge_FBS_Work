// Assignment 7 - Q1.8: Calculator using pointer
// Type 3 function with pointer

#include <stdio.h>

void calculator(int *a, int *b, char *op) {
    switch(*op) {
        case '+':
            printf("%d + %d = %d\n", *a, *b, *a + *b);
            break;
        case '-':
            printf("%d - %d = %d\n", *a, *b, *a - *b);
            break;
        case '*':
            printf("%d * %d = %d\n", *a, *b, *a * *b);
            break;
        case '/':
            if(*b != 0)
                printf("%d / %d = %d\n", *a, *b, *a / *b);
            else
                printf("Division by zero error\n");
            break;
        case '%':
            if(*b != 0)
                printf("%d %% %d = %d\n", *a, *b, *a % *b);
            else
                printf("Modulo by zero error\n");
            break;
        default:
            printf("Invalid operator\n");
    }
}

int main() {
    int num1 = 10, num2 = 5;
    char op = '+';
    
    printf("=== Calculator Using Pointer ===\n\n");
    calculator(&num1, &num2, &op);
    
    num1 = 15; num2 = 4; op = '-';
    calculator(&num1, &num2, &op);
    
    num1 = 7; num2 = 3; op = '*';
    calculator(&num1, &num2, &op);
    
    return 0;
}
























