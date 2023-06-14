#include<stdio.h>



int main() {

    int num1 , num2 , addition , subraction , multiplication , division;
    printf("Enter  first number: ");
    scanf("%d",&num1);

    printf("EnterSecond number: ");
    scanf("%d",&num2);


    addition = num1 + num2;
    multiplication = num1 *num2;
    division = num1 / num2;
    subraction = num1 - num2;

    printf("The result of additon is :%d\n",addition);
    printf("The result of subraction is :%d\n ",subraction);
    printf("The result of multiplication is :%d\n",multiplication);
    printf("The result of division is :%d\n ",division);


    return 0;
    
}