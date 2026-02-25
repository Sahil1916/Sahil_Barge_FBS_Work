/*Write a menu driven program to take a number for user and perform operations as follows.

Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.*/
#include <stdio.h>
void main()
{
    for (;;)
    {
        printf("--------------------------------------------------------------\n");
        printf("Which opration you want to perfrom.....\n");
        printf("--------------------------------------------------------------\n");

        printf("Press 1.To check number is even or odd.\n");
        printf("Press 2.To check number is prime or not.\n");
        printf("Press 3.To check number is pallindrome or not.\n");
        printf("Press 4.To check number is positive, negative or zero.\n");
        printf("Press 5.To reverse a number.\n");
        printf("Press 6.To find sum of digits.\n");
        printf("Press 0.To EXIt.........\n");
        printf("--------------------------------------------------------------\n");
        printf("enter the number between 1 to 6\n");
        int number;
        scanf("%d", &number);

        if (number == 1) // Even or odd
        {
            printf("Enter the number");
            int no1;
            scanf("%d", &no1);
            if (no1 % 2 == 0)
            {
                printf("the number %d is even\n\n",no1);
            }
            else
            {
                printf("the number %d is odd\n\n",no1);
            }
            printf("Again..");
        }
        else if (number == 2) // prime or not
        {
            printf("Enter the number : ");
            int isPrime = 1;
            int no2;
            scanf("%d", &no2);

            for (int i = 2; i <= no2 / 2; i++)
            {
                if (no2 % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1)
            {
                printf("the given number %d is prime number \n \n",no2);
            }
            else
            {
                printf("the given number %d is not prime number\n \n",no2);
            }
            printf("Again..");
        }
        else if (number == 3) // Palindrome or not
        {
            printf("Enter the number ");
            int no3;
            int temp, digit, sum = 0;
            scanf("%d", &no3);
            temp = no3;
            for (; temp != 0; temp = temp / 10)
            {

                digit = temp % 10;
                sum = sum * 10 + digit;
            }
            if (no3 == sum)
            {

                printf("the given number %d is palindrome\n\n",no3);
            }
            else
            {
                printf("the given number %dis not palindrome\n\n",no3);
            }
            printf("Again..");
        }
        else if (number == 4) // Positive Negative Zero
        {
            printf("Enter the number : ");
            int no4;
            scanf("%d",&no4);
            if (no4 >= 1)
            {
                printf("the number is positive\n\n");
            }
            else if (no4 < 0)
            {
                printf("the number is negative\n\n");
            }
            else if (no4 == 0)
            {
                printf("the number is zero\n\n");
            }
            else
            {
                printf("invalid operator\n\n");
            }
        }
        else if (number == 5)//To reverse number 
        {
            printf("Enter the number :");
            int no5;
            scanf("%d",&no5);
            int digit,sum = 0,temp;
           for(temp = no5;temp != 0;temp=temp/10){

            digit = temp%10;
            sum = sum*10+digit;
           }
           printf("The reverse number is %d \n\n",sum);

        }
        else if (number == 6)//Sum of digit 
        {
            printf("Enter the number :");
            int no6;
            scanf("%d",&no6);
            int digit , temp ,sum =0;
            for(temp = no6;temp!=0;temp = temp/10){
               digit = temp%10;
               sum =sum+digit;
            }
            printf(" The sum of digit is %d\n\n",sum);
        }
        else if (number == 0)
        {
            printf("Exit........");
           break;
        }
        else
        {
            printf("Invalid input......\n\n");
        }
    }
}
