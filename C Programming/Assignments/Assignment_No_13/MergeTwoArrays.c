#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int *arr = (int *)malloc(n1 * sizeof(int));
    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int *brr = (int *)malloc(n2 * sizeof(int));
    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    int *merged = (int *)malloc((n1 + n2) * sizeof(int));

    for (i = 0; i < n1; i++)
        merged[i] = arr[i];
    for (i = 0; i < n2; i++)
        merged[n1 + i] = brr[i];

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    printf("\n");
    free(arr); free(brr); free(merged);
    return 0;
}