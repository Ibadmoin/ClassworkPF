#include<stdio.h>


// Task 2:
// Write a C program to print square star (*) pattern series of n rows. For example if n=5 the star pattern should be printed like:


int main(){
    int n;
    printf("Enter numbers of row : ");
    scanf("%d",&n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("* ",j);
    //     }
    //     printf("\n");
        
    // }


    // while-loop //
// int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <=n)
//         {
//             printf("* ",j);
//             j++;
//         }
//         printf("\n");
//         i++;
    
//     }
    
    
// Do-while loop//
int i = 1;
do
{
int j = 1;
printf("\n");
do
{
    printf("* ",j);
    j++;
} while (j <= n);
i++;
} while (i <= n);


    return 0;
}