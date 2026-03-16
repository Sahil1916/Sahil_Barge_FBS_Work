#include<stdio.h>
void main(){
    int no = 5;
    int fact = 1;
    for (int i = 1;i <=no; i++)
    {
        fact = fact*i;
    }
                printf("the factorial of %d is %d \n",no,fact);

}