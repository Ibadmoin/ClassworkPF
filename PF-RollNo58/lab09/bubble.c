#include <stdio.h>

// write the function to bubble sort a array.

#define maxSize 100
int* bubble(int arr[], int size);

int main()
{
    int size, arr[maxSize];
    printf("Enter the size for the array (upto %d): ", maxSize);
    scanf("%d", &size);

    // taking elements of the array for the specified size.
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element for the array: ",i+1);
        scanf("%d", &arr[i]);
    }
    // showing the current array elements.
    printf("\nThe current elements of arrray are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
// calling bubble sort function.
int* sortArray = bubble(arr,size);

    printf("\nThe array after sort is : ");
for (int i = 0; i < size; i++)
{
    printf("%d ",sortArray[i]);
}

    return 0;
}

int* bubble(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j]> arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
return arr;

}