#include <stdio.h>

int mystrlen(char str[]){
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}

void mystrrev(char str[]){
    int i=0;
    int j=mystrlen(str)-1;
    char temp;

    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}

int main(){
    char str[]="hello";

    mystrrev(str);

    printf("%s",str);

    return 0;
}