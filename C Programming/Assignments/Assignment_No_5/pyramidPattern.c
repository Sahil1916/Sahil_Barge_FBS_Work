/*pyramid pattern
Input: n = 5
Output:
    *
   * *
  * * *
 * * * *
* * * * *  */
#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(int k = 1; k <=i - 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
