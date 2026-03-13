#include <stdio.h>

int main()
{
    int target = 5;
    int a[5] = {10, 45, 1, 5, 6};
    int found = 0;

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (target == a[i])
        {
            printf("Element found at index: %d", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found");

    return 0;
}