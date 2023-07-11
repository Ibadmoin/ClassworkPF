
// Task 8:

// Write a program to enter any number and calculate its factorial using do-while.

#include<stdio.h>


int main(){

    int n,fact=1;
    printf("Enter the integer for its factiorial: ");
    scanf("%d",&n);

    if (n<0)
    {
        printf("factorial is not defined for negative numbers!");
    
    } else if (n == 0)
    {
        printf("The factorial of 0 is 1.\n");
    }else {
        int i = 1;
        do
        {
            fact *= i;
            i++;
        } while (i<=n);
        printf("The factorial of %d is %d",n,fact);
    }
    
    






    return 0;
}