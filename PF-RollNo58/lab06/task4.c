#include<stdio.h>

//Write a program that takes character input unless Enter is pressed and print total number of inputs by the user.


int main(){

    char ch;
    int count = 0;

    printf("Enter characters (press Enter to stop) : ");

    // for (int i = 0; ch != 10 ; i++) //or ch != '\n' to note enter key  
    // {
    //     scanf("%c",&ch);
    //     count++;
    
    // }
    // printf("Total number of inputs %d\n",count-1);

    // while loop//
    // while (ch != 10 )
    // {
    //     scanf("%c",&ch);
    //     count++;
    // }
    // printf("Total number of inputs %d\n",count-1);
    

    // do-while loop//
    do {
        scanf("%c",&ch);
        count++;
        
    } while (ch != '\n');
        printf("Total number of inputs %d\n",count-1);
    return 0;
}
