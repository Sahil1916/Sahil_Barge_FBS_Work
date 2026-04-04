#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MOVIES 50

struct Movie {
    int id;
    char title[100];
    char director[100];
    int year;
    char genre[50];
};

int movieCount = 0;
struct Movie movies[MAX_MOVIES];

// Add a movie
void addMovie() {
    if (movieCount >= MAX_MOVIES) {
        printf("Database full!\n");
        return;
    }
    struct Movie *m = &movies[movieCount];
    m->id = movieCount + 1;

    printf("\nEnter Movie Title    : ");
    scanf(" %[^\n]", m->title);
    printf("Enter Director Name  : ");
    scanf(" %[^\n]", m->director);
    printf("Enter Release Year   : ");
    scanf("%d", &m->year);
    printf("Enter Genre          : ");
    scanf(" %[^\n]", m->genre);

    movieCount++;
    printf("Movie added! ID = %d\n", m->id);
}

// Display all movies
void displayAllMovies() {
    if (movieCount == 0) { printf("No movies in database.\n"); return; }
    printf("\n%-4s %-30s %-25s %-6s %-15s\n",
           "ID", "Title", "Director", "Year", "Genre");
    printf("-----------------------------------------------------------------------\n");
    for (int i = 0; i < movieCount; i++) {
        printf("%-4d %-30s %-25s %-6d %-15s\n",
               movies[i].id, movies[i].title,
               movies[i].director, movies[i].year, movies[i].genre);
    }
}

// Search by title
void searchMovie() {
    char keyword[100];
    printf("\nEnter title to search: ");
    scanf(" %[^\n]", keyword);

    int found = 0;
    for (int i = 0; i < movieCount; i++) {
        if (strstr(movies[i].title, keyword) != NULL) {
            printf("\n--- Movie Found ---\n");
            printf("ID       : %d\n", movies[i].id);
            printf("Title    : %s\n", movies[i].title);
            printf("Director : %s\n", movies[i].director);
            printf("Year     : %d\n", movies[i].year);
            printf("Genre    : %s\n", movies[i].genre);
            found = 1;
        }
    }
    if (!found) printf("No movie found with title '%s'\n", keyword);
}

// Update movie by ID
void updateMovie() {
    int id;
    printf("\nEnter Movie ID to update: ");
    scanf("%d", &id);

    struct Movie *m = NULL;
    for (int i = 0; i < movieCount; i++) {
        if (movies[i].id == id) { m = &movies[i]; break; }
    }

    if (m == NULL) { printf("Movie ID %d not found!\n", id); return; }

    printf("Current Title    : %s\n", m->title);
    printf("Current Director : %s\n", m->director);
    printf("Current Year     : %d\n", m->year);
    printf("Current Genre    : %s\n", m->genre);

    int field;
    printf("\nWhat to update?\n");
    printf("1. Title\n2. Director\n3. Year\n4. Genre\n");
    printf("Enter choice: ");
    scanf("%d", &field);

    switch (field) {
        case 1:
            printf("New Title    : ");
            scanf(" %[^\n]", m->title);
            break;
        case 2:
            printf("New Director : ");
            scanf(" %[^\n]", m->director);
            break;
        case 3:
            printf("New Year     : ");
            scanf("%d", &m->year);
            break;
        case 4:
            printf("New Genre    : ");
            scanf(" %[^\n]", m->genre);
            break;
        default:
            printf("Invalid field.\n");
            return;
    }
    printf("Movie updated successfully!\n");
}

// Search by genre
void searchByGenre() {
    char genre[50];
    printf("\nEnter Genre to search: ");
    scanf(" %[^\n]", genre);

    int found = 0;
    printf("\n--- Movies in genre '%s' ---\n", genre);
    for (int i = 0; i < movieCount; i++) {
        if (strcasecmp(movies[i].genre, genre) == 0) {
            printf("[%d] %s (%d) - Dir: %s\n",
                   movies[i].id, movies[i].title,
                   movies[i].year, movies[i].director);
            found = 1;
        }
    }
    if (!found) printf("No movies found in genre '%s'\n", genre);
}

void main() {
    int choice;

    // Pre-load sample movies
    strcpy(movies[0].title, "Inception");
    strcpy(movies[0].director, "Christopher Nolan");
    movies[0].year = 2010;
    strcpy(movies[0].genre, "Sci-Fi");
    movies[0].id = 1;

    strcpy(movies[1].title, "The Dark Knight");
    strcpy(movies[1].director, "Christopher Nolan");
    movies[1].year = 2008;
    strcpy(movies[1].genre, "Action");
    movies[1].id = 2;

    strcpy(movies[2].title, "3 Idiots");
    strcpy(movies[2].director, "Rajkumar Hirani");
    movies[2].year = 2009;
    strcpy(movies[2].genre, "Comedy");
    movies[2].id = 3;

    movieCount = 3;

    do {
        printf("\n====== MOVIE DATABASE ======\n");
        printf("1. Add Movie\n");
        printf("2. Display All Movies\n");
        printf("3. Search by Title\n");
        printf("4. Search by Genre\n");
        printf("5. Update Movie\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addMovie(); break;
            case 2: displayAllMovies(); break;
            case 3: searchMovie(); break;
            case 4: searchByGenre(); break;
            case 5: updateMovie(); break;
            case 0: printf("Exiting Movie Database. Bye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);
}
