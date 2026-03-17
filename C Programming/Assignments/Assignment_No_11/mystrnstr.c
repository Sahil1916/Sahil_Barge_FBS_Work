#include <stdio.h>

char* mystrnstr(char str[], char sub[], int n){
    int i,j;

    for(i=0;i<n && str[i];i++){
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

    printf("%s",mystrnstr(str,"world",11));

    return 0;
}