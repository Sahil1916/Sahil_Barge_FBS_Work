//Write a program to check whether a person is eligible to vote (age ≥ 18).
#include<stdio.h>
void main(){
  int age = 12;
  
  if (age>=18)
  {
    printf("The person is eligible for vote");
  }else{
    int Age= 18 - age;
    printf("the person is not eligble to vote , your are eligible to vote in next %d  years",Age);
  }
  

}