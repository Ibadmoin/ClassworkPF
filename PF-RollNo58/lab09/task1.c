#include<stdio.h>



// Task 1:
// Write a program that will insert 10 integer elements in an array and print them in new lines.


int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d integer: ",i+1);
        scanf("%d",&arr[i]);
    }
    int i = 0;
    printf("\nThe elements in array are: ");
    while (i<10)
    {
        printf("%d ",arr[i]);
        i++;
    }
    
    


    return 0;
}