// /* Write a program to check the string is palindrome or not. */
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[] = "sahil";
//     char b[100];
//     strcpy(b, a);

//     int lenght = strlen(a);
//     int i = 0;
//     int j = lenght - 1;
//     while (i < j)
//     {
//         int temp = b[i];
//         b[i] = b[j];
//         b[j] = temp;
//         i++;
//         j--;
//     }
//     //printf("%s", b);

//     if (strcmp(a, b))

//         printf("the string is not  palindrome : %s", a);
//     else
//         printf("the string is  palindrome : %s", a);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "sahil";
    int length = strlen(a);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++)
    {
        if (a[i] != a[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is palindrome: %s", a);
    else
        printf("The string is not palindrome: %s", a);

    return 0;
}
