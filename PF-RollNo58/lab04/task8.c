#include<stdio.h>
/*Task 08: Any integer is input through the keyboard. 
Write a program to find out whether it is an odd number or even number. (Hint: use modulo operator.)*/

int main(){
    int num;
    printf("Enter any Number: ");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
    printf("It is an Even Number");
    }else
    printf("It is an odd Number");
    
}