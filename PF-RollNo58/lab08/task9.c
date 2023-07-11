#include<stdio.h>


// Task 9:

// Write a C program to enter any number from user and find the reverse of number, the program executes once and if user wants to repeat the program he will press Y.
// Example:
// Input:1234 Output:4321


int main(){

    int num;
    char repeat;
do
{
    printf("Enter a number to reversed it: ");
    scanf("%d",&num);
    int temp = num;
int reversedNum = 0;
    do
    {
        int remainder = num % 10;
        reversedNum = reversedNum *10 + remainder;
        num /=10;
    } while (num > 0);

    printf("The reverse of %d is %d\n",temp,reversedNum);
    


    printf("Do you want to repeat the program (Y/N): ");
    scanf(" %c",&repeat);

} while (repeat == 'Y'|| repeat == 'y');






    return 0;
}