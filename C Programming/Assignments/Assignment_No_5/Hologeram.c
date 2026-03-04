#include<stdio.h>
void main (){
int n = 4;
for(int i = 1;i<=n;i++){
   // printf("%d",i);
   for(int j = 1;j<=n;j++){
    if(i ==1 || i == n || j == 1 || j == n)
    printf("* ");
    else
    printf("  ");
   }
  printf(" \n");
}


}