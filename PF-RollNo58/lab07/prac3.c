#include<stdio.h>


// Write a C Program to print triangle of characters as below

int main(){

     char alpha= 0;
     for (int i = 65 ; i <= 89; i++)
     {
        for (int j = 65; j <= i; j++)
        {
            printf("%c",alpha+i);
        }
        printf("\n");
        
     }
     

}