/*Check the given number is prime or not.
Input: n = 7
Output: Prime*/
#include <stdio.h>
void main()
{
    int no = 12;
    int i = 2;
    int isPrime = 0;
    while (i <= no / 2)
    {
        if (no % i == 0)
        {
            isPrime = 1;
            break;
        }
        i++;
    }
    if (isPrime == 0)
    {
        printf("the given number is prime");
    }
    else
    {
        printf("the given number is not  prime");
    }
}
