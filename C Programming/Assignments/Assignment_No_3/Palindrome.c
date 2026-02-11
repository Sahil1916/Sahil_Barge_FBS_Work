/*check the given nuumber is palindrome */
#include<stdio.h>
void main(){

    int no = 4854;
    int temp,sum = 0,digit;
    temp = no;
    while (temp !=0)
    {
        digit = temp%10;
        sum = sum*10+digit;
        temp = temp/10;

    }
    if (sum == no)
    {
        printf("the given is paindrome");
    }else{
        printf("the given number is not palindrome");
    }
    
    
}