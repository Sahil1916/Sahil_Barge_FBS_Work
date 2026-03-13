// 4. Find odd and even among the numbers.
#include <stdio.h>
int main()
{
    int arr[5] = {45, 47, 36, 98, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d",size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            printf("  even number %d\n", arr[i]);
        if (arr[i] % 2 != 0)
        
            printf("  ODD number %d \n", arr[i]);
        
    }

    return 0;
}