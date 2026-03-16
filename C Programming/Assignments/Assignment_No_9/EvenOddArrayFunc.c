// find the even odd in the given array using function
#include <stdio.h>
void EvenOdd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("even \n");
            printf("%d ", arr[i]);
        }
        if (arr[i] % 2 != 0)
        {
            printf("odd \n");
            printf("%d ", arr[i]);
        }
    }
}
int main(){

    int a[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    EvenOdd(a,size);
}