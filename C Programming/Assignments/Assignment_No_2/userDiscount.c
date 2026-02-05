/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/

#include <stdio.h>

void main() {
    float price = 750;     // hard-coded price
    float discount = 0;
    char student = 'n';    // hard-coded student status

    if(student == 'y' || student == 'Y') {
        if(price > 500)
            discount = 20;
        else
            discount = 10;
    }
    else {
        if(price > 600)
            discount = 15;
        else
            discount = 0;
    }

    printf("Price = %.2f\n", price);
    printf("Discount = %.2f%%\n", discount);
    printf("Final price = %.2f", price - (price * discount / 100));

}
