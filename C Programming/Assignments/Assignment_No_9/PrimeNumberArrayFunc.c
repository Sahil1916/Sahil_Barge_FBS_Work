// printing the prime numbers in the given array using function 

#include<stdio.h>
void prime(int arr[],int n){

    for (int  i = 0; i < n; i++)
    {
        if (arr[i]<=1)
        {
            continue;
        }
        
        int isprime = 0;
        int j = 2;
          while (j <= arr[i] / 2)
        {
            // printf("enter while");
            if (arr[i] % j == 0)
            {
                isprime = 1;
                break;
            }
            j++;
        }
        if (isprime == 0)
        {
            printf("%d \n", arr[i]);
        }
        
    }
    
}
int main(){

    int a[]={1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    prime(a,size);
}