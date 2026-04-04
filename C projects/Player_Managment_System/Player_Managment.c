#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Player_Managment
{
    int id;
    int jersey_No;
    char p_name[100];
    int runs;
    int wickets;
    int matched_played;

} Player;
//=============== global =============
int capacity = 50;
Player *players = NULL;
int count = 0;

// -----------------function decleration-------------------
void addPlayers();
void removePlayer();
void searchPlayer();
void updatePlayer();
void sortPlayer();
void displayAll();

//-----------------Main method---------------

int main()
{

    players = (Player *)malloc(capacity * sizeof(Player));
    if (players == NULL)
    {
        printf(" memory failed");
        return 1;
    }

    int choice;

    while (1)
    {
        printf("\n===== PLAYER MANAGEMENT SYSTEM =====\n");
        printf("1. Add Players\n");
        printf("2. Remove Players\n");
        printf("3. Search Players\n");
        printf("4. Update Players\n");
        printf("5. Display Sorted Playerss\n");
        printf("6. Display All Playerss \n");
        printf("0. Exit\n");

        printf("==================================\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            addPlayers();
            break;
        case 2:
            removePlayer();
            break;
        case 3:
            searchPlayer();
            break;
        case 4:

            updatePlayer();
            break;
        case 5:
            sortPlayer();
            break;
        case 6:
            displayAll();
            break;
        case 0:
            // free(players);
            printf("Goodbye!\n");

            return 0;
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}

void addPlayers()
{

    if (count == capacity)
    {
        //  if (count == 0)

        //    capacity = 50;
        //  else
        capacity = capacity * 2;

        players = (Player *)realloc(players, capacity * sizeof(Player));

        if (players == NULL)
        {
            printf("===MEMORY ALLOACTION FAILED!!!!====");
            return;
        }
    }
    int id;
    printf("Enter the id:");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
    {
        if (players[i].id == id)
        {
            printf("ID ALREDY EXIST");
            return;
        }
    }
    players[count].id = id;

    printf("Enter the jersey No :");
    scanf("%d", &players[count].jersey_No);

    while (getchar() != '\n')
        ;

    printf("Enter the Player name :");
    fgets(players[count].p_name, 100, stdin);
    players[count].p_name[strcspn(players[count].p_name, "\n")] = '\0';

    printf("Enter the runs:");
    scanf("%d", &players[count].runs);

    printf("Enter the wickets :");
    scanf("%d", &players[count].wickets);

    printf("Enter the matched played:");
    scanf("%d", &players[count].matched_played);

    printf("=======PLAYER ADDED SUCCESSFULLY=======\n\n");
    count++;
}
void removePlayer()
{
    if (count == 0)
    {
        printf("no players");
    }

    printf("\n\n\n=====REMOVE PLAYER=====\n\n\n");
    int id;
    printf("Enter the Id :");
    scanf("%d", &id);

    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (players[i].id == id)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Player is not found !!");
    }

    for (int i = index; i < count - 1; i++)
    {
        players[i] = players[i + 1];
    }
    count--;

    if (count > 0)
        players = realloc(players, count * sizeof(Player));

    printf("\n\n Player removed successfully!\n\n");
}
void searchPlayer()
{
    if (count == 0)
    {
        printf("no players");
    }

    printf("\n\n=====SEARCHING THE PLAYER=====\n\n\n");

    printf("1.Enter the id :\n");
    printf("2.Enter the name :\n");

    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        int id;
        printf("====SEARCH BY ID====\n\n");
        printf("Enter the id :");
        scanf("%d", &id);
        for (int i = 0; i < count; i++)
        {
            if (players[count].id == id)
            {
                printf("-----PLAYER FOUND-----");
                printf("id            : \n", players[i].id);
                printf("Jersey No      :  \n", players[i].jersey_No);
                printf("Player Name    :  \n", players[i].p_name);
                printf("Runs           :  \n", players[i].runs);
                printf("wickets        :   \n", players[i].wickets);
                printf("Matched Played :   \n", players[i].matched_played);
            }
            return;
        }
    }
    else if (choice == 2)
    {
        printf("\n\n====SEARCH BY NAME ====\n\n\n");
        char name[100];
        printf("Enter the name of the player :");
        fgets(name, 100, stdin);
        name[strcspn(name, "\n")] = '\0';

        for (int i = 0; i < count; i++)
        {
            if (strcasecmp(players[i].p_name, name) == 0)
            {
                printf("-----PLAYER FOUND-----");
                printf("id            : \n", players[i].id);
                printf("Jersey No      :  \n", players[i].jersey_No);
                printf("Player Name    :  \n", players[i].p_name);
                printf("Runs           :  \n", players[i].runs);
                printf("wickets        :   \n", players[i].wickets);
                printf("Matched Played :   \n", players[i].matched_played);
            }
            return;
        }
    }
    else
    {
        printf("INVALID OPRETAION");
        return;
    }
}
void updatePlayer()
{
    if (count == 0)
    {
        printf("no players");
        return;
    }
    int id;
    printf("\n\n=====UPDATE Player =====\n\n");
    printf("Enter the Id : ");
    scanf("%d", &id);
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if ((players[i].id == id))
        {
            index = i;
            printf("Enter the jersey No :");
            scanf("%d", &players[index].jersey_No);

            while (getchar() != '\n')
                ;

            printf("Enter the Player name :");
            fgets(players[index].p_name, 100, stdin);
            players[index].p_name[strcspn(players[index].p_name, "\n")] = '\0';

            printf("Enter the runs:");
            scanf("%d", &players[index].runs);

            printf("Enter the wickets :");
            scanf("%d", &players[index].wickets);

            printf("Enter the matched played:");
            scanf("%d", &players[index].matched_played);
            break;
        }
    }
     if (index == -1)
    {
        printf("Players not found");
    }

    printf("Players updated successfully");
}
void displaySorted()
{
    if (count == 0)
    {
        printf("No players available\n");
        return;
    }

    int choice, order;

    printf("Sort Players by:\n1. Runs\n2. Wickets\nEnter choice: ");
    scanf("%d", &choice);

    printf("Order:\n1. High to Low\n2. Low to High\nEnter choice: ");
    scanf("%d", &order);

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            int isSwap = 0;

            if (choice == 1) // Runs
            {
                if (order == 1 && players[j].runs < players[j + 1].runs)
                    isSwap = 1;
                if (order == 2 && players[j].runs > players[j + 1].runs)
                    isSwap = 1;
            }
            else if (choice == 2) // Wickets
            {
                if (order == 1 && players[j].wickets < players[j + 1].wickets)
                    isSwap = 1;
                if (order == 2 && players[j].wickets > players[j + 1].wickets)
                    isSwap = 1;
            }

            if (isSwap)
            {
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\n%-5s %-5s %-10s %-20s %-10s %-10s %-10s\n",
           "No.", "ID", "Jersey", "Player Name", "Runs", "Wickets", "Matches");
    printf("---------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-5d %-5d %-10d %-20s %-10d %-10d %-10d\n",
               i + 1,
               players[i].id,
               players[i].jersey_No,
               players[i].p_name,
               players[i].runs,
               players[i].wickets,
               players[i].matched_played);
    }

    int top = (count < 3) ? count : 3;

    printf("\nTop %d Players:\n", top);

    for (int i = 0; i < top; i++)
    {
        printf("%d. %s | Runs: %d | Wickets: %d | Matches: %d\n",
               i + 1,
               players[i].p_name,
               players[i].runs,
               players[i].wickets,
               players[i].matched_played);
    }
}
void displayAll()
{
    if (count == 0)
    {
        printf("no players");
        return;
    }
    printf("\n\n==========DISPLAY ALL PLAYERS==========\n\n");
    printf("%-5s %-8s %-20s %-20s %-15s %-8s %-6s\n",
           "No.", "ID", "Jersey no", "Player_Name", "runs", "wickets", "matched_playede");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-5d %-8d %-20d %-20s %-15d %-8d %-6d\n",
               i + 1,
               players[i].id,
               players[i].jersey_No,
               players[i].p_name,
               players[i].runs,
               players[i].wickets,
               players[i].matched_played);
    }
}