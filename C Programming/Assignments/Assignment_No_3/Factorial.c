/*Find factorial of given number.
Input: n = 5
Output: 120*/
#include<stdio.h>
void main(){
int num = 6;
 int fact = 1;
 int i = 1;
 while (i<=num)
 {
    fact =  fact*i;
    i++;
 }
 printf("the factorial of %d is %d",num,fact);


}