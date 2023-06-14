#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int result;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d", num1, num2, result);
            break;
            
        case '/':
            if(num2 == 0) {
                printf("Error: Cannot divide by zero");
            } else {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %d", num1, num2, result);
            }
            break;
            
        default:
            printf("Error: Invalid operator");
    }
    
    
    return 0;
}



    