/*WAP to Count the Number of Vowels in a String */

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch[] = {"pratik pandurang thorat"};
    int count = 0;
    for (int i = 0;  ch[i] != '\0'; i++)
    {
         char ch = tolower(ch[i]);  // handle uppercase also
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        {

            count ++;
        }
    }
    printf(" there is a %d vowels in the given string ", count);

    return 0;
}