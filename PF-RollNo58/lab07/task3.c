#include<stdio.h>


// Task 3:
// Write a C program to print Fibonacci series up to n terms.


int main(){

    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    // int current = 0;
    // int next = 1;
    // printf("%d ",current);
    // for(int i=1;i<=n;i++){
    //     int temp = current;
    //     current = next;
    //     next = temp + next;
    //     printf("%d ",current);
    // }

// while-loop //

// int current = 0;
// int next = 1,i=1;
// printf("%d ",current);
// while (i <= n)
// {
//     int temp = current;
//     current= next;
//     next += temp;
//     printf("%d ",current);
//     i++;
// }


// do-while loop//

int current = 0;
int next = 1, i= 1;

printf("%d ",current);
do
{
    int temp = current;
    current = next;
    next +=temp;
    printf("%d ",current);
    i++;
} while (i <= n);


    return 0;
}