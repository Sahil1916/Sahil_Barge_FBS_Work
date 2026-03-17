#include <stdio.h>

void mystrcat(char a[], char b[]){
    int i=0,j=0;

    while(a[i]!='\0')
        i++;

    while(b[j]!='\0'){
        a[i]=b[j];
        i++;
        j++;
    }

    a[i]='\0';
}

int main(){
    char a[50]="Hello ";
    char b[]="World";

    mystrcat(a,b);

    printf("%s",a);

    return 0;
}