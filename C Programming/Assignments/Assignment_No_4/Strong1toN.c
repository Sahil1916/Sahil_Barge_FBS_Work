/*Print strong numbers in the given range 1 to n.*/
#include <stdio.h>
void main()
{
    printf("enter the number");
    int num, temp;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){

        int digit ,sum = 0;
        temp = i;
        for(;temp!=0;temp = temp/10){
            digit = temp%10;
           int  fact = 1;
           for(int j = 1;j<=digit;j++){
            fact = fact*j;
           }
           sum = sum + fact;
        }
        if (i == sum)
        {
            printf("%d\n",i);
        }
        



    }
}