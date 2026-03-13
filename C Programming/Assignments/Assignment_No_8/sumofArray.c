// find the sum of the array
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum = sum + arr[i];
    }
    printf(" sum of array is %d ",sum);

    return 0;
}