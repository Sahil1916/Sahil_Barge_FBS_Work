#include <stdio.h>

int mystrcmp(char a[], char b[]){
    int i=0;

    while(a[i]==b[i]){
        if(a[i]=='\0')
            return 0;
        i++;
    }

    return a[i]-b[i];
}

int main(){
    char a[]="abc";
    char b[]="abc";

    printf("%d",mystrcmp(a,b));

    return 0;
}