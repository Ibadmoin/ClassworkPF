#include<stdio.h>

/*Task 06: The current year and the year in which the employee joined the organization are entered through the keyboard. 
If the number of years for which the employee has served the organization is greater than 3 then a bonus of Rs.2500/- 
is given to the employee. If the years of service are not greater than 3, then the program should do nothing.*/

int main(){
int c_year,j_year;
printf("Please Enter the current year: ");
scanf("%d",&c_year);
printf("Please Enter the joining year: ");
scanf("%d",&j_year);

int service = c_year - j_year;
int bonus = 2500;
if (service > 3)
{
    printf("Hurray! you got bonus of Rs.%d/-",bonus);
} else {
    printf("Better luck nest year!");
}

    return 0;
}