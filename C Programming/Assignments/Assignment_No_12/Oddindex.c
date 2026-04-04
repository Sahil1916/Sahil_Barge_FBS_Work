/* WAP to Remove the Characters of Odd Index Values in a String */
#include <stdio.h>
#include<string.h>
int main()
{
    char a[] = "pratik";
    printf("%s\n", a);

   int lenght = strlen(a);
   for (int i = 0; i < lenght; i+=2)
   {
    printf("%c",a[i]);
   }
   
    return 0;
}