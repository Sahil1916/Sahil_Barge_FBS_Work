#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct menuDriven
{
    int taskID;
    char description[1000];
    char status[100];
} menuDriven;

menuDriven *menu;
int capacity = 10;
int count = 0;

void addtask();
void updatetask();
void displaytask();

int main()
{
    menu = (menuDriven *)malloc(capacity * sizeof(menuDriven));

    if (menu == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    int choice;

    while (1)
    {
        printf("\n-------------- TO DO LIST ----------------\n");
        printf("1. Add Task\n");
        printf("2. Update Task\n");
        printf("3. Display All Tasks\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addtask();
            break;

        case 2:
            updatetask();
            break;

        case 3:
            displaytask();
            break;

        case 0:
            free(menu);
            printf("Good Bye...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}

void addtask()
{
    if (capacity == count)
    {
        capacity = capacity * 2;

        menu = (menuDriven *)realloc(menu, capacity * sizeof(menuDriven));

        if (menu == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }
    }

    int id;

    printf("Enter Task ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (menu[i].taskID == id)
        {
            printf("Task ID already exists\n");
            return;
        }
    }

    menu[count].taskID = id;

    while (getchar() != '\n');

    printf("Enter Task Description: ");
    fgets(menu[count].description, 1000, stdin);
    menu[count].description[strcspn(menu[count].description, "\n")] = '\0';

    printf("Enter Task Status: ");
    fgets(menu[count].status, 100, stdin);
    menu[count].status[strcspn(menu[count].status, "\n")] = '\0';

    count++;

    printf("Task Added Successfully\n");
}

void updatetask()
{
    if (count == 0)
    {
        printf("No tasks available to update\n");
        return;
    }

    int id;

    printf("Enter Task ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (menu[i].taskID == id)
        {
            while (getchar() != '\n');

            printf("Enter New Description: ");
            fgets(menu[i].description, 1000, stdin);
            menu[i].description[strcspn(menu[i].description, "\n")] = '\0';

            printf("Enter New Status: ");
            fgets(menu[i].status, 100, stdin);
            menu[i].status[strcspn(menu[i].status, "\n")] = '\0';

            printf("Task Updated Successfully\n");
            return;
        }
    }

    printf("Task ID not found\n");
}

void displaytask()
{
    if (count == 0)
    {
        printf("No tasks to display\n");
        return;
    }

    printf("\n---------- TASK LIST ----------\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nTask ID: %d\n", menu[i].taskID);
        printf("Description: %s\n", menu[i].description);
        printf("Status: %s\n", menu[i].status);
    }
}