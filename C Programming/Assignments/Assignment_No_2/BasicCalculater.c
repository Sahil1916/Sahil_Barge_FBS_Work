/*Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
#include <stdio.h>
void main()
{

    int num1 = 10;
    int num2 = 17;
    char op = '+';
    if (op == '+')
    {
        int sum = num1 + num2;
        printf("The sum is %d", sum);
    }
    else if (op == '-')
    {
        int sub = num1 - num2;
        printf("The sub is %d", sub);
    }
    else if (op == '*')
    {
        int mul = num1 * num2;
        printf("The multi is %d", mul);
    }
    else if (op == '/')
    {
        int div = num1 / num2;
        printf("The division is %d", div);
    }
    else
    {
        printf("The operation is invalid");
    }
}