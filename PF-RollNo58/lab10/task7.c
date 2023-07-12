// Task 7:

// Write a program to multiply any two 3 x 3 matrices. Add result in third array and print this array.



#include<stdio.h>



int main(){

        int arr1[3][3], arr2[3][3];

    printf("Enter the elements for first matrix (9 numbers): ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements for second matrix (9 numbers): ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // multiplying  Two Matrices using nested loops
    int arr3[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    // printing the multiplied matrix
    printf("\nMultiplied matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }




    return 0;
}