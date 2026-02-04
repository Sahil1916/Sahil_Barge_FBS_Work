//Write a program to check given 3 digit number is pallindrome or not.
#include<stdio.h>
void main(){
    int number = 454;

   int first_Digit = number%10;
   int last_Digit = number/100;

   if (first_Digit == last_Digit)
   {
    printf("The number %d is palindrome",number);
   }else{
        printf("The number %d is not  palindrome",number);

   }
   

}