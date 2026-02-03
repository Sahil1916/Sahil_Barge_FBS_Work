//write the c program to calculate the percentages
#include<stdio.h>
void main(){
    int sub1,sub2,sub3,sub4,sub5;
    sub1= 85;
    sub2= 90;
    sub3= 87;
    sub4= 75;
    sub5= 98;
    int sum = sub1+sub2+sub3+sub4+sub5;
    printf("the totalmarks is %d \n",sum);

    float percentage = (sum/500.0)*100;
    printf("the percentage is %f",percentage);
}