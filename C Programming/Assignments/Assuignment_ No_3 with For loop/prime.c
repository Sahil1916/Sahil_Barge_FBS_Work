#include <stdio.h>
void main()
{

    int no = 7;
    int isPrime = 0;
    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        printf("the number is prime");
    }
    else
        printf("the number is not prime");
}