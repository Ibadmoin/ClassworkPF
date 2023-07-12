
// Task 5:
// Write a program to obtain transpose of a 4 x 4 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column

#include <stdio.h>

int main()
{

    int arr[4][4];

    printf("Enter numbers for 4x4 matrix: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // printing the original array
    printf("\nOriginal Array:\n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // transposing of a square matrix using nested loops
    int transpose[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    // printing transpose matrix
    printf("\nTranspose Matrix :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}