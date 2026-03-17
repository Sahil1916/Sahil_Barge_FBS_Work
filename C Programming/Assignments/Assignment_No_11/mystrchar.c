#include <stdio.h>

char* mystrchr(char str[], char ch){
    int i=0;

    while(str[i]){
        if(str[i]==ch)
            return &str[i];
        i++;
    }

    return NULL;
}

int main(){
    char str[]="hello";

    printf("%s",mystrchr(str,'h'));

    return 0;
}