#include<stdio.h>
// Task 9:
// Write a C program to print rhombus star(*) pattern series using for loop. The pattern should look like:


int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
          printf(" ");
        }
        
   
        for (int j = 1; j <= 5; j++)
        {
            printf("*",j);
        }

        printf("\n");
    }

    // while-loop //
// int i = 1;
//     while (i <= 5)
//     {
//         int j=1,k=1;
//         printf("\n");
//         while (k <= 5 - i)
//         {
//             printf(" ");
//             k++;
//         }
//         while (j <= 5)
//         {
//             printf("*",j);
//             j++;
//         }
        
//         i++;
//     }
    

    // do while-loop //
   int i = 1;
    do {
        int j = 1, k = 1;
        do {
            printf(" ");
            k++;
        } while (k <= 6 - i);
        do {
            printf("*");
            j++;
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 5);
    
    

    return 0;
}