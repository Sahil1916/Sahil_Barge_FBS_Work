#include <stdio.h>
#include <string.h>

int main() {

    char a[50] = "Hello";
    char b[50] = "World";
    char c[50];
    
    // 1 strlen
    printf("Length of a: %lu\n", strlen(a));

    // 2 strcpy
    strcpy(c, a);
    printf("Copy using strcpy: %s\n", c);

    // 3 strncpy
    strncpy(c, b, 3);
    c[3] = '\0';
    printf("Copy first 3 chars: %s\n", c);

    // 4 strcat
    strcat(a, b);
    printf("Concatenation: %s\n", a);

    // 5 strncat
    strncat(a, "!!!", 2);
    printf("strncat result: %s\n", a);

    // 6 strcmp
    printf("strcmp result: %d\n", strcmp("abc", "abc"));

    // 7 strncmp
    printf("strncmp result: %d\n", strncmp("apple", "apricot", 2));

    // 8 strchr
    printf("First occurrence of 'o': %s\n", strchr(a,'o'));

    // 9 strrchr
    printf("Last occurrence of 'o': %s\n", strrchr(a,'o'));

    // 10 strstr
    printf("Substring search: %s\n", strstr(a,"World"));

    // 11 strtok
    char str[] = "C,Java,Python";
    char *token = strtok(str, ",");

    printf("Tokens:\n");
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    // 12 memcpy
    char src[] = "Memory";
    char dest[20];
    memcpy(dest, src, strlen(src)+1);
    printf("memcpy result: %s\n", dest);

    // 13 memmove
    char move[] = "abcdef";
    memmove(move+2, move, 3);
    printf("memmove result: %s\n", move);

    // 14 memcmp
    printf("memcmp result: %d\n", memcmp("abc","abd",3));

    // 15 memset
    char star[10] = "hello";
    memset(star,'*',3);
    printf("memset result: %s\n", star);

    return 0;
}