/*Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by Non e”)*/

#include<stdio.h>
void main(){
int number = 3;
if (number%5==0 && number%3==0)
{
    printf("the number is devisible by both ");
}else if(number%5==0)
{
    printf("The number is divisible by 5 but not 3");
}else if (number%3==0)
{
    printf("the number is devisible by 3 but not 5");
}else{
printf("the both number is not divisible");

}




}