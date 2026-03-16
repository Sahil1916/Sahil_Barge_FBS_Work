// merging the array using function
#include <stdio.h>

void marge(int arr[], int brr[], int merge[], int n, int n1)
{
    for (int i = 0; i < n; i++)
    {
        merge[i] = arr[i];
    }
    for (int i = 0; i < n1; i++)
    {
        merge[n + i] = brr[i];
    }
}
int main()
{
   int a[]={1,2,3};
   int b[]={4,5,6};
   int size = sizeof(a)/sizeof(a[0])+sizeof(b)/sizeof(a[0]);
   int c[size];
    marge(a,b,c,3,3);
    for (int  i = 0; i <size ; i++)
    {
        printf("%d ",c[i]);
    }
    
    return 0;
}