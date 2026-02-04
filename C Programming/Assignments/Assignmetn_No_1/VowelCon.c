//Write a program to check whether a given character is a vowel or consonant.
#include<stdio.h>
void main(){
    char alphabet = 'U';
    if(alphabet=='a' || alphabet=='A'||alphabet=='e' || alphabet=='E'||alphabet=='I' || alphabet=='i'||alphabet=='o' || alphabet=='O'||alphabet=='U' || alphabet=='u')
    {
       printf(" the char is vowel");
     
    }else{
        printf("the char is consonant");
    }
}