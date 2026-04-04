#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Player {
    char name[50];
    int matches;
    int runs;
    int wickets;
};

// a. Accept information of all players
void acceptPlayers(struct Player *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter Details for Player %d ---\n", i + 1);
        printf("Name            : ");
        scanf(" %[^\n]", (p+i)->name);
        printf("Matches Played  : ");
        scanf("%d", &(p+i)->matches);
        printf("Runs Scored     : ");
        scanf("%d", &(p+i)->runs);
        printf("Wickets Taken   : ");
        scanf("%d", &(p+i)->wickets);
    }
}

// b. Display information of all players
void displayPlayers(struct Player *p, int n) {
    printf("\n%-5s %-20s %-10s %-8s %-10s\n",
           "No.", "Name", "Matches", "Runs", "Wickets");
    printf("-------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10d %-8d %-10d\n",
               i+1, (p+i)->name, (p+i)->matches, (p+i)->runs, (p+i)->wickets);
    }
}

// c. Display player with max runs and max wickets
void displayTopPlayers(struct Player *p, int n) {
    int maxRuns = 0, maxWickets = 0;
    int runIdx = 0, wicketIdx = 0;

    for (int i = 0; i < n; i++) {
        if ((p+i)->runs > maxRuns) {
            maxRuns = (p+i)->runs;
            runIdx = i;
        }
        if ((p+i)->wickets > maxWickets) {
            maxWickets = (p+i)->wickets;
            wicketIdx = i;
        }
    }

    printf("\n===== Top Performers =====\n");
    printf("Max Runs Scorer:\n");
    printf("  Name    : %s\n", (p+runIdx)->name);
    printf("  Runs    : %d\n", (p+runIdx)->runs);
    printf("  Matches : %d\n", (p+runIdx)->matches);

    printf("\nMax Wicket Taker:\n");
    printf("  Name    : %s\n", (p+wicketIdx)->name);
    printf("  Wickets : %d\n", (p+wicketIdx)->wickets);
    printf("  Matches : %d\n", (p+wicketIdx)->matches);
}

void main() {
    int n = MAX;
    struct Player *players = (struct Player *)malloc(n * sizeof(struct Player));

    printf("===== Cricket Player Records =====\n");
    printf("Enter details for %d players:\n", n);

    acceptPlayers(players, n);

    printf("\n===== All Players =====");
    displayPlayers(players, n);

    displayTopPlayers(players, n);

    free(players);
}
