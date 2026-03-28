#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    char ch;
    printf("Enetr the string :");
   fgets(name,100,stdin);

    printf("Enter the character to replace :");
    scanf("%c", &ch);

    int i = 0;
    while (name[i] != '\0')
    {
        
        if (name[i]==ch)
        {
            name[i] = '*';
        }
        i++;
    }
    printf("%s", name);
}