#include<stdio.h>

// Task 5:
// Write a program to create two character arrays of same length and copy the content of one array into another in reverse order. 

int main(){
   char  arr1[4] = {};
   char  arr2[4] = {'D','C','B','A'};
   int length = sizeof(arr2)/sizeof(arr2[0]);


for (int i = length-1,j = 0;i>=0;i--,j++ )
{
    arr1[j] = arr2[i];
}

   

   int i = 0;
   while (i<length)
   {
    printf(" %c ",arr1[i]);
    i++;
   }
   



   





    return 0;
}

