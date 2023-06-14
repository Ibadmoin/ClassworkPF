#include<stdio.h>

//Write a program to print the table (till 10) of the integer taken input from the user.

int main(){
    int n;
    printf("Enter the number to print the table of : ");
    scanf("%d",&n);

        printf("The table of %d : \n",n);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d * %d = %d\n",n,i,n*i);
    // }
    // while loop//
//  int i = 1;   
// while (i <=10)
// {
//     printf("%d * %d = %d\n",n,i,n*i);
//     i++;
// }
// do-while loop//
int i = 1;
do
{
    printf("%d * %d = %d\n",n,i,n*i);
    i++;
} while (i <= 10);


    return 0;
}