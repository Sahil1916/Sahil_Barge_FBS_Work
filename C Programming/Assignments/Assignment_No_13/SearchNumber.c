#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, key, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at index %d\n", key, i);
            found = 1;
        }
    }
    if (!found)
        printf("%d not found in array\n", key);

    free(arr);
    return 0;
}