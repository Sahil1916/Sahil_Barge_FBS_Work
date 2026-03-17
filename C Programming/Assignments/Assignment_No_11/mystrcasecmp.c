#include <stdio.h>

char lower(char c){
    if(c>='A' && c<='Z')
        return c+32;
    return c;
}

int mystrcasecmp(char a[], char b[]){
    int i=0;

    while(lower(a[i])==lower(b[i])){
        if(a[i]=='\0')
            return 0;
        i++;
    }

    return lower(a[i])-lower(b[i]);
}

int main(){
    printf("%d",mystrcasecmp("HELLO","hgello"));
}