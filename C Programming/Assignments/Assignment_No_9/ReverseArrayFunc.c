// reverse the array using function
#include <stdio.h>
void reverse(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int temp;
    while (left < right)
    {

         temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main(){
    int a[]={256,54,15,56,45,57};
    int size = sizeof(a)/sizeof(a[0]);
    reverse(a,size);

}