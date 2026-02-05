/*Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/

#include <stdio.h>
void main()
{

    int side1 = 10;
    int side2 = 10;
    int side3 = 10;

    if (side1 == side2 && side2 == side3 && side1 == side3)
    {
        printf("The given triangle is equilateral ");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("The given triangle is isosceles");
    }
    else
    {
        printf("The given triangle is scalene ");
    }
}