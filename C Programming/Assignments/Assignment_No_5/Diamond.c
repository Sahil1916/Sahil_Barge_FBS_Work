/*8. Print a pattern of stars in diamond shape
Input: n = 4
Output:

   *
  * *
 * * *
* * * *
 * * *
  * *
   *  */
  #include<stdio.h>
  int main(){
    int n = 5;
    for(int i =1;i <=n;i++){
        for(int k = 1; k <=n-i;k++){
            printf(" ");
        }
        for(int j =1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i =4;i>=1;i--){
        for(int k = 1; k <=n-i;k++){
            printf(" ");
        }
        for(int j =1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
  }