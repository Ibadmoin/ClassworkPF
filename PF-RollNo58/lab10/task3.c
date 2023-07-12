// Task 3:
// Fifteen numbers are entered from the keyboard into an array with 3 rows and 5 columns. The number to be searched is entered through the keyboard by the user. Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array.

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[3][5];
    int searchNo;
    int count = 0;
    printf("Enter the array element (15 numbers): ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter number to be searched: ");
    scanf("%d", &searchNo);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == searchNo)
            {
                count++;
            }
        }
    }

    if (count > 0)
    {
        printf("The number %d is present %d times in the array.", searchNo, count);
    }
    else
    {
        printf("Number not found.");
    }

    return 0;
}