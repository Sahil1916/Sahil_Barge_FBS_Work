/* 6. WAP to Take in a String and Replace Every Blank Space with special symbol. */
#include <stdio.h>
int main()
{
    char ch[] = {"sahil shivaji barge "};
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == ' ')
            ch[i] = '@';
    }
    printf("%s", ch);

    return 0;
}