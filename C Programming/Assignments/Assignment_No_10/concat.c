#include <stdio.h>
#include <string.h>

int main()
{

    char a[20] = "Hello ";
    char b[] = "World";
    strcat(a, b);
    printf("%s", a);
}