#include <stdio.h>

int main()
{
    int no = 54748;
    int temp, digit = 0, count = 0, sum = 0, power;

    temp = no;

    // 1) for loop to count digits
    for (; temp != 0; temp = temp / 10)
    {
        count++;
    }

    temp = no;  // reassign original number

    // 2) for loop to extract digits
    for (; temp != 0; temp = temp / 10)
    {
        digit = temp % 10;

        power = 1;

        // 3) for loop to calculate digit^count
        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
    }

    if (no == sum)
        printf("The given number is Armstrong");
    else
        printf("The given number is not Armstrong");

    return 0;
}
