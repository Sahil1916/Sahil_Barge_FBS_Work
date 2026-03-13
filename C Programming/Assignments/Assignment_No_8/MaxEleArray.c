// find maximum and minimum element in an given array .
#include <stdio.h>
int main()
{
    int arr[5] = {1, 8, 45, 6, 4};
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (max <arr[i])
        {
            // update max
            max = arr[i];

        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d this is maximum element inan array \n", max);
    printf("%d this is the minimum element  in the given array   ",min);

    return 0;
}
