#include<stdio.h>


// 1- Write a function to calculate the factorial value of any integer entered through the keyboard.  
int fact(int num);

int main(){

int n;
printf("Enter an Integer: ");
scanf("%d",&n);
fact(n);
    return 0;
}


int fact(int num){
int fact = 1;
for (int i = num; i > 0; i--)
{
    fact = fact*i;
}
printf("The factorial is %d",fact);



}

