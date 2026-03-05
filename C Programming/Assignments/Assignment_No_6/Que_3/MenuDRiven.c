// Assignment 6 - Q3.5: Menu driven program
// Two types: w/o param w/o return, with param w/o return

#include <stdio.h>

// Without parameter, without return type
void menuProgram1() {
    int choice, num;
    
    printf("\n--- MENU ---\n");
    printf("1. Check even or odd\n");
    printf("2. Check prime or not\n");
    printf("3. Check palindrome or not\n");
    printf("4. Check positive, negative or zero\n");
    printf("5. Reverse a number\n");
    printf("6. Find sum of digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if(choice >= 1 && choice <= 6) {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        switch(choice) {
            case 1:
                if(num % 2 == 0)
                    printf("%d is even\n", num);
                else
                    printf("%d is odd\n", num);
                break;
                
            case 2: {
                int isPrime = 1;
                if(num <= 1) isPrime = 0;
                for(int i = 2; i <= num/2; i++) {
                    if(num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime)
                    printf("%d is prime\n", num);
                else
                    printf("%d is not prime\n", num);
                break;
            }
            
            case 3: {
                int original = num, reversed = 0, remainder;
                while(num > 0) {
                    remainder = num % 10;
                    reversed = reversed * 10 + remainder;
                    num /= 10;
                }
                if(original == reversed)
                    printf("%d is palindrome\n", original);
                else
                    printf("%d is not palindrome\n", original);
                break;
            }
            
            case 4:
                if(num > 0)
                    printf("%d is positive\n", num);
                else if(num < 0)
                    printf("%d is negative\n", num);
                else
                    printf("Number is zero\n");
                break;
                
            case 5: {
                int reversed = 0, remainder, temp = num;
                while(temp > 0) {
                    remainder = temp % 10;
                    reversed = reversed * 10 + remainder;
                    temp /= 10;
                }
                printf("Reverse of %d is %d\n", num, reversed);
                break;
            }
            
            case 6: {
                int sum = 0, temp = num, remainder;
                while(temp > 0) {
                    remainder = temp % 10;
                    sum += remainder;
                    temp /= 10;
                }
                printf("Sum of digits of %d is %d\n", num, sum);
                break;
            }
        }
    } else {
        printf("Invalid choice!\n");
    }
}

//  With parameter, without return type
void menuProgram2(int choice, int num) {
    switch(choice) {
        case 1:
            if(num % 2 == 0)
                printf("%d is even\n", num);
            else
                printf("%d is odd\n", num);
            break;
            
        case 2: {
            int isPrime = 1;
            if(num <= 1) isPrime = 0;
            for(int i = 2; i <= num/2; i++) {
                if(num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime)
                printf("%d is prime\n", num);
            else
                printf("%d is not prime\n", num);
            break;
        }
        
        case 3: {
            int original = num, reversed = 0, remainder;
            while(num > 0) {
                remainder = num % 10;
                reversed = reversed * 10 + remainder;
                num /= 10;
            }
            if(original == reversed)
                printf("%d is palindrome\n", original);
            else
                printf("%d is not palindrome\n", original);
            break;
        }
        
        case 4:
            if(num > 0)
                printf("%d is positive\n", num);
            else if(num < 0)
                printf("%d is negative\n", num);
            else
                printf("Number is zero\n");
            break;
            
        case 5: {
            int reversed = 0, remainder, temp = num;
            while(temp > 0) {
                remainder = temp % 10;
                reversed = reversed * 10 + remainder;
                temp /= 10;
            }
            printf("Reverse of %d is %d\n", num, reversed);
            break;
        }
        
        case 6: {
            int sum = 0, temp = num, remainder;
            while(temp > 0) {
                remainder = temp % 10;
                sum += remainder;
                temp /= 10;
            }
            printf("Sum of digits of %d is %d\n", num, sum);
            break;
        }
        
        default:
            printf("Invalid choice!\n");
    }
}

int main() {
    printf("=== Menu Driven Program - Two Function Types ===\n\n");
    
    printf("Type 1 (w/o param, w/o return):\n");
    menuProgram1();
    
    printf("\nType 2 (with param, w/o return):\n");
    printf("Enter choice (1-6): ");
    int ch;
    scanf("%d", &ch);
    printf("Enter number: ");
    int n;
    scanf("%d", &n);
    menuProgram2(ch, n);
    
    return 0;
}