#include<stdio.h>


// Task 5:									
// Write a program that will generate years from 1950 to 2015 and mention if the year is leap year. 



int main(){

    int year = 1950;
    do
    {
        printf("%d ",year);
        if ((year % 4 == 0 && year % 100 != 0) ||year % 400 == 0 )
        {
            printf(" leap year!");
        }
        printf("\n");
        year++;
        
    } while (year <= 2015);
    


    return 0;
}