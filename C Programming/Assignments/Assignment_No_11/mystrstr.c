#include <stdio.h>

char* mystrstr(char str[], char sub[]){
    int i,j;

    for(i=0;str[i]!='\0';i++){
        j=0;
        while(sub[j] && str[i+j]==sub[j])
            j++;

        if(sub[j]=='\0')
            return &str[i];
    }

    return NULL;
}

int main(){
    char str[]="hello world";

    printf("%s",mystrstr(str,"world"));

    return 0;
}