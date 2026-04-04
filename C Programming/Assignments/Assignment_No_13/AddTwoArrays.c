#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *brr = (int *)malloc(n * sizeof(int));
    int *crr = (int *)malloc(n * sizeof(int));

    printf("Enter elements of first array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter elements of second array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &brr[i]);

    for (i = 0; i < n; i++)
        crr[i] = arr[i] + brr[i];

    printf("Sum array (crr): ");
    for (i = 0; i < n; i++)
        printf("%d ", crr[i]);

    printf("\n");
    free(arr); free(brr); free(crr);
    return 0;
}