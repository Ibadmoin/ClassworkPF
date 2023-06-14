#include<stdio.h>

//Write a program that takes character input. Terminate when ‘X’  is pressed.

int main(){

    // for (int i = 0; i <=1; )
    // {
    //     char c;
    //     printf("Enter any character : ");
    //     scanf(" %c",&c);
    //     if (c == 'x'|| c == 'X'){
    //         printf("Program terminated!");
    //         break;
    //     } else {
    //         printf("You have entered '%c' \n",c);
    //     }
    // }
    

    // while loop//
    // int i =0;
    // while (i < 10)
    // {
    //         char c;
    //     printf("Enter any character : ");
    //     scanf(" %c",&c);
    //     if (c == 'x'|| c == 'X'){
    //         printf("Program terminated!");
    //         break;
    //     } else {
    //         printf("You have entered '%c' \n",c);
    //     }
    // }


    // do-while loop//
  int i = 0;
    do
    {
            char c;
        printf("Enter any character : ");
        scanf(" %c",&c);
        if (c == 'x'|| c == 'X'){
            printf("Program terminated!");
            break;
        } else {
            printf("You have entered '%c' \n",c);
        }
      
    } while (i < 10);
    

    

    return 0;
}