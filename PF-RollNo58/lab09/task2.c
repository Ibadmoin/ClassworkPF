#include<stdio.h>



// Task 2:
// Write a program that will ask user to input index number from where to delete a number from array.



int main(){
    int size,arr[100];
// taking size of the array for elements to be input through keyboard.
    printf("Enter the size of the array (upto 100): ");
    scanf("%d",&size);

    // inserting elements of array from user.

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    
// Showing current array to user before deleting.

for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}

// asking user the index to delete that element from array;
int index;
printf("\nEnter the index of the element you want to delete: ");
scanf("%d",&index);

if (index < 0 || index > 100)
{
    printf("Invalid Index!\n");
}else {
    // deleting the specific element from array.

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    // showing updated array after deletion
    printf("\nThe elements in update array are : ");
    for(int i=0 ;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    
}


    return 0;
}