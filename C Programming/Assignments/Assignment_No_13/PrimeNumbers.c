#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers: ");
    for (i = 0; i < n; i++)
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);

    printf("\n");
    free(arr);
    return 0;
}