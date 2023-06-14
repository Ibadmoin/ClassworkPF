#include<stdio.h>

// Task 7:
// Read a positive integer value, and compute the following sequence:
// 	If the number is even, halve it
// 	If it's odd, multiply by 3 and add 1.
// Repeat this process until the value is 1, printing out each value. Finally print out how many of these operations you performed. Typical output might be:

int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Intial value is %d\n",n);
    // int count = 0;
    // for (int i = 0; i != 1; )
    // {
    //     if (n % 2 == 0){
    //         n = n / 2;
    //     } else {
    //         n = n * 3 + 1;

    //     }
    //     if (n == 1)
    //     {
    //         break;
    //     }
        
    //     printf("Next value is %d\n",n);
    //     count++;
    
    // }
    // printf("final value is %d,number of steps %d",1,count+1);


    // while loop //

    // int count = 0;
    // while(n != 1){
    //     if(n % 2 == 0){
    //         n /=2;
    //     } else {
    //         n = n * 3 + 1;
    //     }
        
    //   if (n == 1)
    //   {
    //     break;
    //   } else {
    //       printf("Next value is %d\n",n);
    //     count++;
    //   }
      

    // }
    // printf("Final value is %d, number of steps %d",1,count+1);


    // do-while loop //

    int count = 0;
    do
    {
        if (n % 2 == 0){
            n /=2;
        } else {
            n = n*3+1;
        }
        if (n == 1)
        {
            break;
        } else {
            printf("Next value is %d\n",n);
            count++;
        }
        
    } while (n != 1);
    printf("Final value is %d, number of steps %d",1,count+1);
}