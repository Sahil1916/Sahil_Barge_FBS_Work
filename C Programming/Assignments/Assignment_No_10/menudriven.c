#include <stdio.h>
#include <string.h>

int main()
{
   
        char str1[100], str2[100];
        int choice;

        printf("Enter first string: ");
        scanf("%s", str1);

        printf("Enter second string: ");
        scanf("%s", str2);
 for (;;)
    {
        printf("\n----- STRING MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Find Character\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Length of first string: %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(str1, str2);
            printf("After copying: %s\n", str1);
            break;

        case 3:
            strcat(str1, str2);
            printf("After concatenation: %s\n", str1);
            break;

        case 4:
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 5:
        {
            char ch;
            printf("Enter character to search: ");
            scanf(" %c", &ch);

            if (strchr(str1, ch))
                printf("Character found in string\n");
            else
                printf("Character not found\n");
            break;
        }

        case 6:
            printf("Program Ended\n");
            break;
        
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}