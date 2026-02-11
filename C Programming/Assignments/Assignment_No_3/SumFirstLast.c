/*Find the sum of first and last digit */
#include<stdio.h>
void main(){
    int no = 547447;
    int first,last,sum;

    last = no%10;

    while (10<=no)
    {
        no = no/10;
    }
    first = no;
    sum = last+first;

    printf("the sum  is %d",sum);
    
}