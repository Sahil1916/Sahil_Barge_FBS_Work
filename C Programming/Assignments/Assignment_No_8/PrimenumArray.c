// Accept array and prints prime numbers in array
#include <stdio.h>
int main()
{
    printf("Enter the arrays values:");

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        // printf("first array \n");
        int no = arr[i];
        int j = 2;
        int isprime = 0;
        while (j <= no / 2)
        {
            // printf("enter while");
            if (no % j == 0)
            {
                isprime = 1;
                break;
            }
            j++;
        }

        if (isprime == 0)
        {
            printf("%d \n", no);
        }
    }

    return 0;
}