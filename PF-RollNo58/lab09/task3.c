#include <stdio.h>

// Task 3:
// Write a program to find out the largest and the smallest number in an array.

#define max_size 100

int largestArr(int arr[], int size);
int smallestArr(int arr[], int size);

int main()
{

    int size, arr[max_size];
    // taking the size of the array from user
    printf("Enter the size of array (upto %d): ", max_size);
    scanf("%d", &size);

    // getting elements for the array of specified size.

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element for the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // showing the current array that is stored.
    printf("The elements of array are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    // calling largestarray function.
    int max = largestArr(arr, size);
    // calling Smallestarray function
    int min = smallestArr(arr, size);

    printf("\nThe largest number in array is %d", max);
    printf("\nThe smallest number in array is %d", min);

    return 0;
}

// defining respective functions.

int largestArr(int arr[], int size)
{

    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int smallestArr(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}
