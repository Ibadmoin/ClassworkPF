#include<stdio.h>

//Write a program to generate a series of 
// a)	first 50 even numbers
// b)	first 50 odd numbers


int main(){
printf("The first 50 even numbers are : \n");
    for (int i = 2; i <= 50 ;i = i + 2 )

    {
        printf("%d\n",i);
    }

    // while loop //
    int i = 2;
    while (i <= 50)
    {
        printf("%d ",i);
        i +=2;
    }
    

    // do-while loop//

    do
    {
        printf("%d ",i);
        i +=2;
    } while ( i <= 50);
    
    
printf("\nThe first 50 odd numbers are : \n");
    for (int i = 1; i <= 50 ;i = i + 2 )

    {
        printf("%d\n",i);
    }

  // while loop//
int i = 1;
  while (i <=50)
  {
    printf("%d ",i);
    i += 2;
  }
    
// do-while loop//

do
{
    i +=2;
    printf("%d ",i);
} while (i <=50);

    return 0;
}