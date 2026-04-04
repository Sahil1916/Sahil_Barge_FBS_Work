/*Write a program to scan string from user then scan a single character and search it
in a accepted string. */

#include <stdio.h>

int main() {

    char name[100];
    char ch;
    int i;
   printf("Enter a string: ");
    scanf("%s", name);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);
     int flag =0;
    for (i = 0;  name[i] != '\0'; i++)
    {
        if (name[i]==ch)
        {
            flag = 1;
            break;
        }
        
    }
    if (flag)
    {
        printf("the charcter is found at",i);
    }else
    printf("the character is not found");
    
    

    return 0;
}