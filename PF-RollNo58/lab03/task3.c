/*Task 03: Aslam’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, 
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>

int main(){
    float basic_salary;
    char name[10];
    printf("Enter Name of the user: ");
    scanf("%s",&name);
    printf("Enter his basic salary : ");
    scanf("%f",&basic_salary);
  float  dearness_allowance = 0.4*basic_salary;
   float rent_allowance = 0.2*basic_salary;
    float gross_salary = basic_salary + dearness_allowance + rent_allowance;
    printf("%s's gross salary is %.2f",name,gross_salary);

    return 0;
}