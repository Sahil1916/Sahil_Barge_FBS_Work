/* WAP to Calculate the Number of Words Present in a String */

#include <stdio.h>
int main()
{
    char a[] = "sahil shivaji barge";
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ' && (i == 0 || a[i-1] == ' '))
        {
            count++;
        }
    }
    printf("%d words in the given string", count);

    return 0;
}