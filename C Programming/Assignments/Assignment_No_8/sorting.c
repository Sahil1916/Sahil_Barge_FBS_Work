// sorting the array
#include <stdio.h>
int main()
{
    int arr[6] = {60, 50, 40, 30, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("after sorting the array in ascending \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}