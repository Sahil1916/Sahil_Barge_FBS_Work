/* WAP to Remove the nth Index Character from a Non-Empty String */
#include <stdio.h>

int main()
{

    char str[100];
    int n, i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter index to delete: ");
    scanf("%d", &n);
    if (n < 0 || str[n] == '\0')
    {
        printf("Invalid index");
    }
    else
    {
        // delete character by shifting left
        for (i = n; str[i] != '\0'; i++)
        {
            str[i] = str[i + 1];
        }

        printf("Updated string: %s", str);
    }
    return 0;
}
