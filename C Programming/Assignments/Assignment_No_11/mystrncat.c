#include <stdio.h>

void mystrncat(char dest[], char src[], int n){
    int i=0,j=0;

    while(dest[i])
        i++;

    while(src[j] && j<n){
        dest[i]=src[j];
        i++;
        j++;
    }

    dest[i]='\0';
}

int main(){
    char a[50]="Hello ";
    char b[]="World";

    mystrncat(a,b,3);

    printf("%s",a);

    return 0;
}