// Task 6:

// Write a program to add two 6 x 6 matrices. Add result in third array and print this array.

#include <stdio.h>

int main()
{

    int arr1[6][6], arr2[6][6];

    printf("Enter the elements for first matrix (36 numbers): ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements for second matrix (36 numbers): ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Adding Two Matrices using nested loops
    int resArr[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            resArr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // printing the resultant/add matrix
    printf("\nAddition matrix\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", resArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
