// Assignment 6 - Q1.12: Student discount (Assignment 2 Q5)
// Four types of functions

#include <stdio.h>

//  Without parameter, without return type
void calculateDiscount1() {
    float price = 600;
    char isStudent = 'y';
    float discount = 0, finalPrice;
    
    if(isStudent == 'y' || isStudent == 'Y') {
        if(price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    } else {
        if(price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }
    
    finalPrice = price - discount;
    printf("Original Price: %.2f\n", price);
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);
}

//  Without parameter, with return type
float calculateDiscount2() {
    float price = 600;
    char isStudent = 'y';
    float discount = 0;
    
    if(isStudent == 'y' || isStudent == 'Y') {
        if(price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    } else {
        if(price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }
    
    return price - discount;
}

//  With parameter, without return type
void calculateDiscount3(float price, char isStudent) {
    float discount = 0, finalPrice;
    
    if(isStudent == 'y' || isStudent == 'Y') {
        if(price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    } else {
        if(price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }
    
    finalPrice = price - discount;
    printf("Original Price: %.2f\n", price);
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);
}

//  With parameter, with return type
float calculateDiscount4(float price, char isStudent) {
    float discount = 0;
    
    if(isStudent == 'y' || isStudent == 'Y') {
        if(price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    } else {
        if(price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }
    
    return price - discount;
}

int main() {
    printf("=== Student Discount - Four Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    calculateDiscount1();
    
    printf("\nType 2 (w/o param, with return):\n");
    float finalPrice = calculateDiscount2();
    printf("Final Price: %.2f\n", finalPrice);
    
    printf("\nType 3 (with param, w/o return):\n");
    calculateDiscount3(450, 'y');
    
    printf("\nType 4 (with param, with return):\n");
    float finalPrice2 = calculateDiscount4(450, 'y');
    printf("Final Price: %.2f\n", finalPrice2);
    
    return 0;
}