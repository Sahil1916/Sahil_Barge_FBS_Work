// sorting the array using function
#include <stdio.h>
void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int swapped  = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped==0)
        {
            break;
        }
        
    }
    printf(" the sorted array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int a[5] = {50, 40, 30, 20, 10};

    sort(a, 5);

    return 0;
}