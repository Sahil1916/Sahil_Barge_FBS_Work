/* WAP to Take in Two Strings and Display the Larger String without Using Built-in
Functions */
#include <stdio.h>
int main()
{
    char a[100];
    char b[100];
    printf("Enter the first string ");
    //scanf("%s", a); --- this is use for only one word 
    fgets(a,sizeof(a) ,stdin); // its is use to scan whole line 
    printf("Enter the secod string ");
    //scanf("%s", b);
 fgets(b,sizeof(b),stdin);
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    //printf("%d",i);
    int j = 0;
    while (b[j] != '\0')
    {
        j++;
    }
    //printf("%d",j);
    if (i > j)

        printf("the first string is greater %s", a);
    else
        printf("the second string is grater %s", b);

    return 0;
}