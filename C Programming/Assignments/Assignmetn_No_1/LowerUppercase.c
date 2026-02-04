//Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
void main(){
  char ch = '0';

  if (ch>='A'&& ch <='Z')
  {
    printf("The char %c is UpperCase",ch);

  }else if (ch>='a' && ch<='z')
  {
printf("the char %c is LowerCase",ch);
  }else{
    printf("the given is not character");
  }
  
  
}