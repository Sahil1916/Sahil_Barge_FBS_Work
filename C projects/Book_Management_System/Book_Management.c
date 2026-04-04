#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// ------------------------Struct------------------------------
typedef struct Book_Management
{
    int Book_id;
    char Book_name[100];
    char Author_name[100];
    char catagory[100];
    double price;
    double rating;
} Book;

Book *books = NULL;
int count = 0;
int capacity = 0;

//------------ function decleration-----------------

void addBook();
void removeBook();
void searchBook();
void showAuthorBooks();
void showCategoryBooks();
void updateBook();
void displaySorted();
void displayAll();

// ─── MAIN ──────────────────────────────────────────────

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== BOOK MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book\n");
        printf("4. Show Author's Books\n");
        printf("5. Show Category's Books\n");
        printf("6. Update Book\n");
        printf("7. Display Sorted Books\n");
        printf("8. Display All Books\n");
        printf("0. Exit\n");
        printf("==================================\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            removeBook();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            showAuthorBooks();
            break;
        case 5:
            showCategoryBooks();
            break;
        case 6:
            updateBook();
            break;
        case 7:
            displaySorted();
            break;
        case 8:
            displayAll();
            break;
        case 0:
            free(books);
            printf("Goodbye!\n");

            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
// this method is for add books
void addBook()
{
    if (count == capacity)
    {
        if (capacity == 0)
            capacity = 50;
        else
            capacity = capacity * 2;

        books = (Book *)realloc(books, capacity * sizeof(Book));

        if (books == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }
    }

    printf("\n ---------adding new book---------- \n");

    int id;
    printf("Enter the book ID :");
    scanf("%d", &id);

    // same id sathi
    for (int i = 0; i < count; i++)
    {
        if (books[i].Book_id == id)
        {
            printf("Book ID already exists! Try again.\n");
            return;
        }
    }

    books[count].Book_id = id;

    getchar();

    printf("Enter the Book name :");
    fgets(books[count].Book_name, 100, stdin);
    books[count].Book_name[strcspn(books[count].Book_name, "\n")] = '\0';

    printf("Enter the Book Author: ");
    fgets(books[count].Author_name, 100, stdin);
    books[count].Author_name[strcspn(books[count].Author_name, "\n")] = '\0';

    printf("Enter the category: ");
    fgets(books[count].catagory, 100, stdin);
    books[count].catagory[strcspn(books[count].catagory, "\n")] = '\0';

    printf("Enter the price of book :");
    scanf("%lf", &books[count].price);

    printf("Enter the rating of book :");
    scanf("%lf", &books[count].rating);

    count++;

    printf("The book added Successfully\n");
}
// for remove books
void removeBook()
{
    if (count == 0)
    {
        printf("no books");
        return;
    }
    int id;
    printf("To remove a Book Enter the Book Id:");
    scanf("%d", &id);

    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (books[i].Book_id == id)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("the book is not found");
    }

    for (int i = index; i < count - 1; i++)
    {
        books[i] = books[i + 1];
    }
    count--;
    if (count > 0)
        books = realloc(books, count * sizeof(Book));
    printf("Book removed successfully!\n");
}
// for searching the book by id
void searchBook()
{
    if (count == 0)
    {
        printf(" No Books in this system");
    }

    int choice;
    printf("\n--- Search Book ---\n");
    printf("1. Search by ID:\n");
    printf("2. Search by Name:\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int id;
        printf("Enter the book Id to search the book ");
        scanf("%d", &id);
        for (int i = 0; i < count; i++)
        {
            if (books[i].Book_id == id)
            {
                printf("\n--- Book Found ---\n");
                printf("ID       : %d\n", books[i].Book_id);
                printf("Name     : %s\n", books[i].Book_name);
                printf("Author   : %s\n", books[i].Author_name);
                printf("Category : %s\n", books[i].catagory);
                printf("Price    : %.2lf\n", books[i].price);
                printf("Rating   : %.1lf\n", books[i].rating);
                return;
            }
        }
        printf("the book not found");
    }
    else if (choice == 2)
    {
        char name[100];
        printf("Enter Book Name: ");
        getchar(); // for clear buffer
        fgets(name, 100, stdin);
        name[strcspn(name, "\n")] = '\0';

        for (int i = 0; i < count; i++)
        {
            if (strcasecmp(books[i].Book_name, name) == 0)
            {
                printf("\n--- Book Found ---\n");
                printf("ID       : %d\n", books[i].Book_id);
                printf("Name     : %s\n", books[i].Book_name);
                printf("Author   : %s\n", books[i].Author_name);
                printf("Category : %s\n", books[i].catagory);
                printf("Price    : %.2lf\n", books[i].price);
                printf("Rating   : %.1lf\n", books[i].rating);
                return;
            }
        }
        printf("the book is not found");
    }
    else
    {
        printf("Invalid input\n");
    }
}
// showing the book by author name
void showAuthorBooks()
{
    if (count == 0)
    {
        printf("no books ");
        return;
    }
    char author[100];
    printf("Enter Author's name:");
    getchar();
    fgets(author, 100, stdin);
    author[strcspn(author, "\n")] = '\0';
    int found = 0; // BOOK COUNT KARANYASATHI
    printf("SHOWS THE AUTHOR BOOKS");
    printf("\n%-5s %-20s %-15s %-8s %-6s\n",
           "No.", "Book Name", "Category", "Price", "Rating");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        if (strcasecmp(books[i].Author_name, author) == 0)
        {
            printf("%-5d %-20s %-15s %-8.2lf %-6.1lf\n",
                   i + 1,
                   books[i].Book_name,
                   books[i].catagory,
                   books[i].price,
                   books[i].rating);
            found++;
        }
    }
    if (found == 0)
    {
        printf("No books found for author '%s'!\n", author);
    }
    else
    {
        printf("\nTotal books found: %d\n", found);
    }
}

// for showing the book by catagory
void showCategoryBooks()
{
    if (count == 0)
    {
        printf("no books ");
        return;
    }
    char category[100];
    printf("Enter Author's name:");
    getchar();
    fgets(category, 100, stdin);
    category[strcspn(category, "\n")] = '\0';
    int found = 0; // BOOK COUNT KARANYASATHI
    printf("SHOWS THE AUTHOR BOOKS");
    printf("\n%-5s %-20s %-15s %-8s %-6s\n",
           "No.", "Book Name", "Category", "Price", "Rating");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        if (strcasecmp(books[i].catagory, category) == 0)
        {
            printf("%-5d %-20s %-15s %-8.2lf %-6.1lf\n",
                   i + 1,
                   books[i].Book_name,
                   books[i].Author_name,
                   books[i].price,
                   books[i].rating);
            found++;
        }
    }
    if (found == 0)
    {
        printf("No books found for Category '%s'!\n", category);
    }
    else
    {
        printf("\nTotal books found: %d\n", found);
    }
}

// update the books using the id
void updateBook()
{
    if (count == 0)
    {
        printf("no books ");
        return;
    }
    int id;
    printf("Enter the boook id for update\n");
    scanf("%d", &id);
    int index = -1;

    printf("BOOK UPDATION ");

    for (int i = 0; i < count; i++)
    {
        if (books[i].Book_id == id)
        {
            index = i;
            printf("Enter the Book name :");
            fgets(books[index].Book_name, 100, stdin);
            books[index].Book_name[strcspn(books[index].Book_name, "\n")] = '\0';

            printf("Enter the Book Author: ");
            fgets(books[index].Author_name, 100, stdin);
            books[index].Author_name[strcspn(books[index].Author_name, "\n")] = '\0';

            printf("Enter the category: ");
            fgets(books[index].catagory, 100, stdin);
            books[index].catagory[strcspn(books[index].catagory, "\n")] = '\0';

            printf("Enter the price of book :");
            scanf("%lf", &books[index].price);

            printf("Enter the rating of book :");
            scanf("%lf", &books[index].rating);
            break;
        }
    }
    if (index == -1)
    {
        printf("book not found");
    }

    printf("book updated successfully");
}
// display the sorted books
void displaySorted()
{
    if (count == 0)
    {
        printf("no books ");
        return;
    }
    int choice, order;
    printf("Sort Books by:\n1. Price\n2. Rating\nEnter choice: ");
    scanf("%d", &choice);

    printf("Order:\n1. High to Low\n2. Low to High\nEnter choice: ");
    scanf("%d", &order);

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            int isSwap = 0;
            if (choice == 1)
            {
                if (order == 1 && books[j].price < books[j + 1].price)
                    isSwap = 1;
                if (order == 2 && books[j].price > books[j + 1].price)
                    isSwap = 1;
            }
            else if (choice == 2)
            {
                if (order == 1 && books[j].rating < books[j + 1].rating)
                    isSwap = 1;
                if (order == 2 && books[j].rating > books[j + 1].rating)
                    isSwap = 1;
            }

            if (isSwap)
            {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
    printf("%-5s %-8s %-20s %-20s %-15s %-8s %-6s\n",
           "No.", "ID", "Book Name", "Author", "Category", "Price", "Rating");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-5d %-8d %-20s %-20s %-15s %-8.2f %-6.1f\n",
               i + 1,
               books[i].Book_id,
               books[i].Book_name,
               books[i].Author_name,
               books[i].catagory,
               books[i].price,
               books[i].rating);
    }
    int top = (count < 3) ? count : 3;
    printf("\nTop %d Books:\n", top);
    for (int i = 0; i < top; i++)
    {
        printf("%d. %s | %s | Price: %.2f | Rating: %.1f\n",
               i + 1, books[i].Book_name,
               books[i].Author_name,
               books[i].price,
               books[i].rating);
    }
}
// for display the allbooks in the records
void displayAll()
{
    if (count == 0)
    {
        printf("No books in the system.\n");
        return;
    }

    // Header
    printf("%-5s %-8s %-20s %-20s %-15s %-8s %-6s\n",
           "No.", "ID", "Book Name", "Author", "Category", "Price", "Rating");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-5d %-8d %-20s %-20s %-15s %-8.2f %-6.1f\n",
               i + 1,
               books[i].Book_id,
               books[i].Book_name,
               books[i].Author_name,
               books[i].catagory,
               books[i].price,
               books[i].rating);
    }
}
