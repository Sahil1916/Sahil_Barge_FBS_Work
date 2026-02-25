/*2. Print prime numbers in the given range 1 to n.*/
#include<stdio.h>
void main(){
    printf("enter the number");
    int num;
    scanf("%d",&num);
    for(int i = 2;i<=num;i++){
       int isPrime = 1;
       for(int j =2;j<=i/2;j++){

        if (i%j==0)
        {
            isPrime = 0;
            break;
        }
        
       }
       if (isPrime == 1)
       {
        printf("%d\n",i);
       }
       

    }
}