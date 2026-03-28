#include <stdio.h>

int main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            sum = sum + i;
        }
    }

    printf("Sum is: %d", sum);

    return 0;
}