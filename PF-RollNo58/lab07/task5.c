#include<stdio.h>

// Task 5:
// Write a C program to enter any number and print table of the given number using for loop. Format of the table should be like: If num =5

// 5 * 1 =5
// 5 * 2 =10
// ...
// ...
// 5 * 10 =50

int main(){

    int n;
    printf("Enter Number to print the table of : ");
    scanf("%d",&n);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d * %d = %d\n",n,i,i*n);
    // }


// while-loop //
int i =1;
// while (i <= 10)
// {
//     printf("%d * %d = %d\n",n,i,n*i);
//     i++;
// }


// Do-while loop //
do
{
    printf("%d * %d = %d\n",n,i,i*n);
    i++;
} while (i <= 10);



    return 0;
    
}