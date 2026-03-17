#include <stdio.h>

char* mystrrchr(char str[], char ch){
    char *last=NULL;

    while(*str){
        if(*str==ch)
            last=str;
        str++;
    }

    return last;
}

int main(){
    char str[]="sahil";

    printf("%s",mystrrchr(str,'i'));

    return 0;
}