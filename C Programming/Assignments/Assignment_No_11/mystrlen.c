#include <stdio.h>

int mystrlen(char str[]){
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}

int main(){
    char str[]="hello";

    printf("Length = %d",mystrlen(str));

    return 0;
}