#include <stdio.h>
#include <string.h>

int main() {

    char a[20], b[] = "hello";

    strcpy(a, b);

    printf("%s", a);

    return 0;
}