/*Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
#include<stdio.h>
void main(){
    int no = 6;
    int digit,fact,sum = 0;
    int temp = no;

    while (temp != 0)
    {
       // printf("first while");
        digit  = temp%10;
        int i = 1;
        fact=1;
        while (digit>=i)
        {
                    //printf("second  while");

            fact = fact*i;
            i++;
        }
        sum = sum+fact;
        temp = temp/10;
        
    }
    if (no == sum)
    {
        printf("the given number is strong number");

    }else{
        printf("the given number is not strong ");
    }
    
    
}