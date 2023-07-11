#include <stdio.h>

// Deleting element from array and replacing it with zero.

int main()
{

    int arr[5] = {10, 26, 29, 10, 18};

    int index;
    int i = 0;
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }

    printf("\nEnter the index to want to delete or replace with 0 : ");
    scanf("%d", &index);

    arr[index] = 0;
    printf("The updated array is: ");
    i = 0;
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}