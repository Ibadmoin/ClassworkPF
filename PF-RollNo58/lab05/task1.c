#include<stdio.h>



// Task 1:
// A company insures its drivers in the following cases
// ―If driver is married
// ―If the driver is unmarried, male & above 30 years of age
// ―If the driver is unmarried, female & above 25 years of age
// In all other cases the driver is not insured. If the marital status, gender and age of the driver are entered through the keyboard, write a program to determine whether the driver is to be insured or not.


int main(){
    char martialStatus;
    char gender;
    int age;
    printf("Enter Martial Status (M/U): ");
    scanf(" %c",&martialStatus);
    printf("Enter gender (M/F): ");
    scanf(" %c",&gender);
    printf("Enter age: ");
    scanf("%d",&age);

    if (martialStatus == 'M' )
    {
    printf("Driver is Insured!\n");
    }else if (martialStatus == 'U' && gender == 'M' && age > 30)
    {
    printf("Driver is Insured!\n");
    }else if (martialStatus == 'U' && gender == 'F' && age > 25)
    {
    printf("Driver is Insured!\n");
      
    }
    
    
    else {
        printf("Driver is not Insured!\n");
    }
     



    return 0;
}