/*Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/

#include<stdio.h>
void main(){
    int age  = 100;
    if (age<12)
    {
        printf("you are the child");
    }else if (age>=12 && age<=19)
    {
        printf("your are a teenager");
    }else if (age>=20 && age<=59)
    {
        printf("your are a Adult");
    }else{
        printf("your are a senior");
    }
    
    
    
}