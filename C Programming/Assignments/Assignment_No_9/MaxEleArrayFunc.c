// finding the maxium and the minimum element is an array
#include <stdio.h>
int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d ", max);
}
int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min= arr[i];
        }
    }
    printf("%d ", min);
}


int main(){

    int a[]={15,32,14,54,74,58,39};
    int size = sizeof(a)/sizeof(a[0]);
    max(a,size);
    min(a,size);

    return 0;
}