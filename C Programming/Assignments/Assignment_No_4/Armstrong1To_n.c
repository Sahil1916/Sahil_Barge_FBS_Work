/*1. Print armstrong numbers in the given range 1 to n.*/
#include <stdio.h>
void main()
{

    printf("Enter the number:");
    int num;
    int digit, temp, power;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        // printf("%d",i);
        temp = i;
       int sum = 0 ,count = 0;

    for(;temp!=0;temp = temp/10){
        count++;
    }
       temp = i;
    for(;temp !=0;temp=temp/10){

        digit = temp %10;

        power = 1;
        for(int i =1;i<=count;i++)
        {
            power= power*digit;
        }
        sum = sum+power;
    }
    if (i == sum)
    {
        printf("%d \n",i);
    }
   
    }
    
    
     //printf("%d",count);
}