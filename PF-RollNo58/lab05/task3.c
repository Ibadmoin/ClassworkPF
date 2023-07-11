// Task 3:
// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.


#include<stdio.h>



int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if (year%4==0 && year %100!=0){
        printf("Leap Year\n");

    }else if (year%400 == 0)
    {
        
        printf("Leap Year\n");
    }else{
        printf("Not a Leap Year.\n");
    }
    
        



    return 0;
}