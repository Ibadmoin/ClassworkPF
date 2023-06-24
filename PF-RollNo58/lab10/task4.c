#include<stdio.h>


// Task 4:
// Take 10 numbers input from user in an array, calculate the sum and average of those 10 numbers.


int main(){

    int arr[10];
    int sum = 0;

for (int i = 0; i < 10; i++)
{
    printf("Enter %d element for the array: ",i+1);
    scanf("%d",&arr[i]);
}

// Calculating Summation of all elements present inside Array
  for (int i = 0; i < 10; i++)
  {
    printf("%d ",arr[i]);
    sum = sum + arr[i];
  }

  printf("\nThe summation of array is: %d",sum);
  printf("\nThe average of array is: %.1f",(float)sum/10);
  
  




    return 0;
}