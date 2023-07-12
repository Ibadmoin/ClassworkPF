// Lab assignment-2-b: Rewrite the program in assignment 2-a with “getch();” and explain what difference did you detect in the output.
#include <stdio.h> 
#include<conio.h> 
void main(void)
{
    printf("Welcome to the wonderful world of C/C++!!!\n");
    getch(); // add this, will show the output screen
    //The difference which I noticed here is that program doesn't exit itself after executing printf satement until any key is pressed!unlike the previous task. 


}
