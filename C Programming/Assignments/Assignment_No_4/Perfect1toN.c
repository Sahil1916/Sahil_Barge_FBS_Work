/*Print perfect numbers in the given range 1 to n.*/
#include <stdio.h>
void main()
{
    printf("enter the number");
    int num, temp;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        temp = i;
        int sum = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (i == sum)
        {
            printf("%d\n", i);
        }
    }
}