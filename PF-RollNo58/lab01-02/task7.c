//Task 07: Create a program that takes a decimal number from user and displays the whole number part and fraction part of the number separately. The output screen should be as shown below:
#include<stdio.h>

int main(){
    double num;
    int whole;
    float fraction;
    printf("Enter any decimal number : ");
    scanf("%lf",&num);

    whole = num;
    printf("The Number you entered has the whole number %d \n",whole);

    fraction = num - whole;
    printf("And it has the fraction part %f",fraction);
     

    return 0;
}