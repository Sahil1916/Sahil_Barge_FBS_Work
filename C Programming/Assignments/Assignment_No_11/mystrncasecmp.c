#include <stdio.h>

char lower(char c){
    if(c>='A' && c<='Z')
        return c+32;
    return c;
}

int mystrncasecmp(char a[], char b[], int n){
    int i;

    for(i=0;i<n;i++){
        char c1=lower(a[i]);
        char c2=lower(b[i]);

        if(c1!=c2)
            return c1-c2;

        if(a[i]=='\0')
            return 0;
    }

    return 0;
}

int main(){
    printf("%d",mystrncasecmp("HELLOQ","hello",6));
}