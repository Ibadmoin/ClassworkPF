#include<stdio.h>

// Task 1:
// Write a C Program to print half pyramid as using numbers as shown in figure below.
 

int main(){

     // for-loop //

    // for (int i = 1; i <= 5; i++)
    // {
    //  for (int j = 1; j <= i; j++)
    //  {
    //     printf("%d ",j);
    //  }
    //  printf("\n");
    // }
    
    // while-loop//


// int i = 1;
// while (i <=5)
// {
//     int j = 1;
//     while (j <= i)
//     {
//         printf("%d ",j);
//         j++;
//     }
//     printf("\n");
//     i++;
    
// }


// Do-while loop//

int i = 1;
do
{
    int j = 1;
printf("\n");
    do
    {
        printf("%d ",j);
        j++;
    } while (j <= i);
    i++;
} while ( i <= 5);




    return 0;

}