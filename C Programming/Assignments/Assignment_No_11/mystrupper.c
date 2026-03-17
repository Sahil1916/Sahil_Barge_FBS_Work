#include <stdio.h>

void mystrupper(char str[]){
    int i=0;

    while(str[i]){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
        i++;
    }
}

int main(){
    char str[]="hello";

    mystrupper(str);

    printf("%s",str);

    return 0;
}