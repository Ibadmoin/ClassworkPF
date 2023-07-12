// Task 4:
// Write a program to pick up the largest number and sum of all the integers from any 5 x 5 matrix.

#include <stdio.h>

int main()
{

    int arr[5][5];

    printf("Enter the elements of array (25 numbers): ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Finding Largest Number in Matrix and summition of them
    int largest = arr[0][0];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }

            sum += arr[i][j];
        }
    }

    printf("The largest number in the matrix is: %d\n", largest);
    printf("The sum of all integers in the matrix is: %d\n", sum);

    return 0;
}