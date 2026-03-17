#include <stdio.h>
#include <string.h>

int main()
{

    char a[20] = "Hello ";
    char b[] = "World";
    strncat(a, b,3);
    printf("%s", a);
}