/*WAP Replace all Occurrences of ‘a’ with $ in a String */
#include<stdio.h>
int main(){
char string[]={"sahil"};
int i = 0;
while (string[i] != '\0')
{
    if (string[i]== 'a')
    {
        string[i] = '$';
        
    }
    i++;
}
printf("%s",string);







    return 0;
}