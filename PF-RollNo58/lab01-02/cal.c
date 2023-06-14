#include<stdio.h>

// make a simple calculator

int main(){
    //declaring variables
int num1,num2;
char operator;
int result;

//intializing variables
printf("Enter first number : ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);

printf("Enter an operator (+,-,*,/,): ");
scanf(" %c",&operator);

// using switch for diferent cases

switch (operator)
{
case '+':
result = num1 + num2;
printf("The sum of %d and %d is %d",num1,num2,result);
    break;

    
    case '-':
    result = num1 - num2;
    printf("The substraction of %d and %d is %d",num1,num2,result);
    break; 

    case '*':
    result = num1 * num2;
    printf("The multiplication of %d and %d is %d ",num1,num2,result);
    break;

    case '/':
    if (num2 == 0)
    {
     printf("Cannot be divisble by Zero");
    } else {
        result = num1 / num2;
        printf("The quotient of %d and %d is %d",num1,num2,result);

    }
    break;
    



default:
printf("Error: Invalid Operator");
  
}


    return 0;
}