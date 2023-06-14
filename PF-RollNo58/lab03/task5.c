/*Task 05: If a five-digit number is input through the keyboard,
 write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)*/

#include<stdio.h>

int main(){
    int num;
    printf("Enter a five-digit number : ");
    scanf("%d",&num);
int a,b,c,d;
a = num/10000;
num = num%10000;

// printf("a is %d \n",a);
// printf("num current value is %d\n",num);

b = num/1000;
num = num%1000;
c = num/100;
num = num%100;
d = num/10;
num = num%10;
printf("The sum its digits is %d",a+b+c+d+num);

    return 0;
}