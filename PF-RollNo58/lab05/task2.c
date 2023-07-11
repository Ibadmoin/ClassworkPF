// Task 2:
// Write a program to calculate the salary as per the following table:
// For Graduate enter ‘G’ and for Post-Graduate accept ‘P’.



#include<stdio.h>


int main(){
    char gender;
    char qualification;
    int yearOfService;

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter qualification (G/P):");
    scanf(" %c",&qualification);
    printf("Enter Year of service: ");
    scanf("%d",&yearOfService);

    if(gender == 'M' && yearOfService >=10 && qualification == 'P'){
        printf("Salary: 15000");

    }else if (gender == 'M' && yearOfService >=10 && qualification == 'G')
    {
        printf("Salary: 10000");
       
    }else if (gender == 'M' && yearOfService < 10 && qualification == 'P')
    {

        printf("Salary: 10000");
    } else if (gender == 'M' && yearOfService < 10 && qualification == 'G')
    {
        printf("Salary: 7000");
       
    }else if (gender == 'F' && yearOfService >= 10 && qualification == 'P')
    {
        printf("Salary: 12000");
        
    }else if (gender == 'F' && yearOfService >= 10 && qualification == 'G')
    {
        printf("Salary: 9000");

    } else if (gender == 'F' && yearOfService < 10 && qualification == 'P')
    {
        printf("Salary: 10000");
    }else if (gender == 'F' && yearOfService < 10 && qualification == 'G')
    {
        
        printf("Salary: 6000");
    }
    
    
    
    
    
    



    return 0;
}