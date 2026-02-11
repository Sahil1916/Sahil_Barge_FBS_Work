/*Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/
#include <stdio.h>
void main()
{

    int no = 54748;
    int temp, digit = 0, count = 0, total = 0, sum = 0,power;
    temp = no;

    // this while is for counting digits
    while (temp != 0)
    {
        
        temp = temp / 10;
        count++;
    }
     
     temp = no;/*redecleare because of first while the temp is carry zero without temp redeclear the second while is not work the condition is false and ans is wrong*/
    while (temp != 0)
    {
        digit = temp%10;
        

        power = 1;
        int i = 1;//this is for counter the power 
       
        while(i<=count){
         power= digit*power;
         i++;

        }
        sum = sum+power;
        temp = temp/10;
       // printf("sum is %d",sum);

    }
    if (no==sum)
    {
printf("the givenn number is armstrong");
    }else{
        printf("the given number is not armstrong");
    }
    
}