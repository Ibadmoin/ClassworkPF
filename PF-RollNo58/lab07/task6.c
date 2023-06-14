#include<stdio.h>

// Task 6:
// Write a C program that will print the following pattern:

int main(){
    // for (int i = 1; i <= 7; i++)
    // {
    // for (int j = 1; j <= i; j++)
    // {
    //     printf("%d ",j);
    // }
    // for (int k = i+1; k <= 7; k++)
    // {
    //     printf("* ");
    // }
    
    // printf("\n");
    
    // }
    

    // while-loop //

    // int i = 1;
    // while (i <= 7){
    //     int j = 1,k=i+1;
    //     while (j <= i)
    //     {
    //         printf("%d",j);
    //         j++;
    //     }
    //     while (k<= 7)
    //     {
    //         printf("*");
    //         k++;
    //     }
    //     printf("\n");
    //     i++;
        
    // }


// Do-while loop  //
int i = 1;
do
{
    int j = 1,k=i+1;
    do
    {
        printf("%d",j);
        j++;
    } while (j<=i);
    do
    {
        printf("*");
        k++;
    } while (k<=7);
    printf("\n");
    i++;
} while (i <= 7);

    return 0;
}