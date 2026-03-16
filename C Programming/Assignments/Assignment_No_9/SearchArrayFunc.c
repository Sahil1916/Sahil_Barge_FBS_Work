// search the targeted element is the given array
#include <stdio.h>

void search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            printf("Element found at index %d\n", i);
            return; // stop function immediately
        }
    }

    printf("Element not found in the array\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(a) / sizeof(a[0]);
    int target = 10;

    search(a, size, target);
}