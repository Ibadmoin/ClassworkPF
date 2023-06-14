//Task 06: Using scanf() and Constant, create a program who takes an input which is radius of circle and calculate area of it.
//Area of Circle 𝐴 = 𝜋𝑟2 where 𝜋 is constant (3.1415)

#include<stdio.h>

int main(){
    float r;
    float pi = 3.1425;
    printf("Enter the radius : ");
    scanf("%f",&r);
    printf("The approx Area of circle is : %.3f ",pi*r*r);


    return 0;
}
