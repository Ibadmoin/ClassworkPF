#include<stdio.h>

//Write a program that prints squares of the integer taken as input, until the square is less than 1000.

int main(){

    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    // for (int i = 0; n*n < 1000; i++)
    // {
    //    if (n == 1)
    //    {
    //     printf("The square will be 1 always");
    //     break;
    //    } else {
    //      n *= n;
    //     printf("%d\n", n);
    //    }
       
    // }

    // while loop//
    // while (n*n < 1000)
    // {
    //   if (n == 1)
    //   {
    //     printf("The square will be 1 always");
    //     break;
    //   } else {
    //     n *=n;
    //   printf("%d\n", n);
      
    //   }
      
    // }
    
    // do-while loop//
    do {
      if (n == 1)
      {
        printf("The square will be 1 always");
        break;
      } else {
        n *=n;
      printf("%d\n", n);
      
      }
      } while (n*n < 1000);
  
  

    return 0;
}