/*Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 → show "Distinction"
If marks are more than 65 → show "First Class"
If marks are more than 55 → show "Second Class"
If marks are 40 or more → show "Pass Class"
If marks are less than 40 → show "Fail"*/

#include<stdio.h>
void main(){

    int marks = 55;
    if (marks>=75)
    {
printf("Your in Distinction ");
    }else if (marks>=65)
    {
        printf("Your in First class");
    }else if (marks>=55)
    {
                printf("Your in Second class");

    }else if (marks>=40)
    {
                printf("Your in pass class");

    }else{
        printf("Your are fail");
    }
    
    
    
    

}