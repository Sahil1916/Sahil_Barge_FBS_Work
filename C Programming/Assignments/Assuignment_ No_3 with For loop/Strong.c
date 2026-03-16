#include<stdio.h>
void main(){
int no = 145;
int temp,digit,sum = 0;
temp = no;
for (;temp!=0;temp = temp/10)
{
    digit = temp%10;
         int fact = 1;
    for(int i = 1;i<=digit;i++){

        fact = fact*i;
    }
    //printf("%d \n ",fact);
    sum = sum+fact;
}
if (no == sum)
{
    printf("the number is strong");
}
else
printf("the number is not strong");


}