#include <stdio.h>

int main()
{
    int no = 547447;
    int first, last, sum;

    last = no % 10;

    for (; no >= 10; no = no / 10)
    {
        // loop keeps dividing until single digit remains
    }

    first = no;
    sum = first + last;

    printf("The sum is %d", sum);

    return 0;
}
