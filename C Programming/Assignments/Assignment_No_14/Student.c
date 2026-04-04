#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};


struct Student storeByValue() {
    struct Student s;
    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    return s;
}


void displayByValue(struct Student s) {
    printf("\n--- Student Details (Pass by Value) ---\n");
    printf("Roll No : %d\n", s.rollNo);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);
}


void storeByAddress(struct Student *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(s+i)->rollNo);
        printf("Name: ");
        scanf("%s", (s+i)->name);
        printf("Marks: ");
        scanf("%f", &(s+i)->marks);
    }
}


void displayByAddress(struct Student *s, int n) {
    printf("\n--- Student Array (Pass by Address) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d -> Roll: %d | Name: %s | Marks: %.2f\n",
               i+1, (s+i)->rollNo, (s+i)->name, (s+i)->marks);
    }
}

// Pass one structure variable by address
void storeOneByAddress(struct Student *s) {
    printf("\nEnter Roll No: ");
    scanf("%d", &s->rollNo);
    printf("Enter Name: ");
    scanf("%s", s->name);
    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void displayOneByAddress(struct Student *s) {
    printf("\n--- Student (Pass One by Address) ---\n");
    printf("Roll No : %d\n", s->rollNo);
    printf("Name    : %s\n", s->name);
    printf("Marks   : %.2f\n", s->marks);
}

void main() {
    // 1. Pass by value
    printf("=== Pass by Value ===\n");
    struct Student s1 = storeByValue();
    displayByValue(s1);

    // 2. Pass by address (array)
    printf("\n=== Pass by Address (Array) ===\n");
    int n = 2;
    struct Student *arr = (struct Student *)malloc(n * sizeof(struct Student));
    storeByAddress(arr, n);
    displayByAddress(arr, n);
    free(arr);

    // 3. Pass one variable by address
    printf("\n=== Pass One Variable by Address ===\n");
    struct Student s2;
    storeOneByAddress(&s2);
    displayOneByAddress(&s2);
}
