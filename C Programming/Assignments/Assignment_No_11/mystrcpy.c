#include <stdio.h>

void mystrcpy(char dest[], char src[]){
    int i=0;
    while(src[i]!='\0'){
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

int main(){
    char a[50];
    char b[]="hello";

    mystrcpy(a,b);
    printf("%s",a);

    return 0;
}