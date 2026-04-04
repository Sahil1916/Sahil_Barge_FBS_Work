#include <stdio.h>
#include <stdlib.h>

struct Book {
    int id;
    char bname[100];
    char author[100];
    float price;
};

void acceptBook(struct Book *b) {
    printf("Enter Book ID     : ");
    scanf("%d", &b->id);
    printf("Enter Book Name   : ");
    scanf(" %[^\n]", b->bname);
    printf("Enter Author Name : ");
    scanf(" %[^\n]", b->author);
    printf("Enter Price       : ");
    scanf("%f", &b->price);
}

void displayBook(struct Book b) {
    printf("\n========== Book Details ==========\n");
    printf("Book ID    : %d\n", b.id);
    printf("Book Name  : %s\n", b.bname);
    printf("Author     : %s\n", b.author);
    printf("Price      : Rs. %.2f\n", b.price);
    printf("==================================\n");
}

void main() {
    struct Book b;
    printf("===== Enter Book Information =====\n");
    acceptBook(&b);
    displayBook(b);
}
