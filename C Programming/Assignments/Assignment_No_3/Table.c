/*Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/
#include<stdio.h>
void main(){
    int table = 5;
int num = 1;
while (num<=10)
{
  int sum = table*num;
 printf("5 * %d  is %d \n",num,sum);
 num++;
}


}