//Write a program to check whether a given year is a leap year.
#include<stdio.h>
void main(){
    int Year = 2003;

    if ((Year%4==0) && (Year%100!=0) || (Year/400==0))
    {
        printf("The year %d is leap year",Year);
    }
    else{
                printf("The year %d is not leap year",Year);

    }
    
}