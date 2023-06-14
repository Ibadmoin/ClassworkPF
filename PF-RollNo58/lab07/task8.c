#include<stdio.h>



// Task 8:
// . Write a C Program to print inverted half pyramid using * as shown below.

// * * * * *
// * * * *
// * * *
// * *
// *


int main(){

    // for (int i = 5; i >= 1; i--)
    // {
    //   for (int j = 1; j <= i; j++)
    //   {
    //     printf("* ",j);
    //   }
    //   printf("\n");
      
    // }
    


    // while-loop //

    // int i = 5;
    // while (i >= 1)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         printf("* ",j);
    //         j++;
    //     }
    //     printf("\n");
    //     i--;
    // }


    // do-while loop //

int i = 5;
do
{
    int j = 1;
    do
    {
    printf("* ",j);
    j++;
    } while (j <= i);
    printf("\n");
    i--;
    
} while (i >= 1);

    

    return 0;
}