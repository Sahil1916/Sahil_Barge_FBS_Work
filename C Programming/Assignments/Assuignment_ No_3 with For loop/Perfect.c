
#include <stdio.h>
void main()
{
    int no = 6;
    int sum = 0;
    for (int i = 1; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            sum = sum + i;
        }
    }
   // printf("sum %d",sum);
   if (sum == no)
   {
    printf("the given number is perfect number ");
   }else
   printf("the given number is not perfect");
   
}