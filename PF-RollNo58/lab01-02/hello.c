#include <stdio.h>

int main() {
  
//declaring input variables
    int num1,num2;
    //intailizing input variables
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    //for sum
    int sum = num1 + num2;
    printf("The Sum of %d and %d is %d \n",num1,num2,sum);
    //for substraction
    int sub = num1 - num2;
    printf("The Subtraction of %d and %d is %d \n",num1,num2,sub);
    //for multiplication
    int mult = num1*num2;
    printf("The multiplication of %d and %d is %d \n",num1,num2,mult);

  
//for division
    if(num2 == 0) {
                printf("Error: Cannot divide by zero \n");
            } else {
                int div = num1 / num2;
                printf("The Division of  %d and %d is %d \n", num1, num2, div);
            }



    return 0;
}