#include<stdio.h>
void main(){

    int no = 121;
    int temp,sum=0,digit;
    temp = no;
    for(;temp!=0;temp = temp/10){
        digit = temp%10;
        sum = sum*10+digit;
    }
    printf("%d\n",sum);
        if (sum == no)
    {
        printf("the given number is palindrome");
    }else{

        printf("the given number is not palindrome");
    }
    
    

}