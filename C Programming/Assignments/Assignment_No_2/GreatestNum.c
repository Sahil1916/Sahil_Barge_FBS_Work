// Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
void main()
{
    int a = 100;
    int b = 200;
    int c = 30;

    if (a > b)
    {
        if (a > c)
        {
            printf("the a is greater");
        }
        else
        {
            printf("The a is greater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("the b is greater");
        }
        else
        {
            printf("the c is greater");
        }
    }
}