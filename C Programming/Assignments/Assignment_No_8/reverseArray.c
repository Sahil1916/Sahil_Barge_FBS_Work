// // reverse array
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int brr[5];
//     for (int i = 0 ; i < 5; i++ )
//     {
//       brr[i] = arr[4 - i];
//     }
//     for (int i = 0; i < 5; i++)
//     printf("%d ", brr[i]);

//     return 0;
// }
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
