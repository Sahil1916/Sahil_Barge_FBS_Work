#include <stdio.h>

int mystrncmp(char a[], char b[], int n){
    int i;

    for(i=0;i<n;i++){
        if(a[i]!=b[i])
            return a[i]-b[i];

        if(a[i]=='\0')
            return 0;
    }

    return 0;
}

int main(){
    printf("%d",mystrncmp("apple","apricot",1));

    return 0;
}