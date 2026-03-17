#include <stdio.h>

void mystrlower(char str[]){
    int i=0;

    while(str[i]){
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        i++;
    }
}

int main(){
    char str[]="HELLO";

    mystrlower(str);

    printf("%s",str);

    return 0;
}