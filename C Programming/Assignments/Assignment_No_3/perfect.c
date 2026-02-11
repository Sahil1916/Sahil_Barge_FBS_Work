/*Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/
#include<stdio.h>
void main(){

    int num = 6;
    int sum = 0;
    int i = 1;
    while (i<=num/2)
    {
        if (num%i==0)
        {
            sum = sum+i;
        }
        
        i++;
        
    }
  printf("%d \n",sum);
  if (sum == num)
  {
    printf("the given number is perfect");
  }
  else{
    printf("the given number is not perfect");
  }
    

}