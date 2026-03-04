/*Print an inverted right-angled triangle pattern
Input: n = 5
Output:

*****
****
***
**
*  */
#include<stdio.h>
void main(){
    int n= 5;
    for(int i = n;i>=1;i--){
        //printf("%d",i);
        for(int j = 1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}