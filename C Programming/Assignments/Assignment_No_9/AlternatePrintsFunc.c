// print alternate array using function

#include <stdio.h>
void AlternatePrint(int arr[],int n)
{
    for (int i = 0; i < n; i += 2)
    {
        printf("%d ", arr[i]);
    }
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a)/sizeof(a[0]);
    AlternatePrint(a,size);
}