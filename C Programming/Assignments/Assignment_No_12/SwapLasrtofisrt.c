/* WAP to Form a New String where the First Character and the Last Character have
been Exchanged */
#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = {"pratik"};
    int lenght = strlen(string);

    char temp = string[0];
    string[0] = string[lenght - 1];
    string[lenght - 1] = temp;

    printf("%s",string);

    return 0;
}