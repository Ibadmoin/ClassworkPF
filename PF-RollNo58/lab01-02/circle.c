#include <stdio.h>
//calculate the area of circle
int main(){

float radius;
float pi = 3.142;
printf("Enter the Radius of the Circle: ");
scanf("%f",&radius);

float result = pi*(radius*radius);
printf("The approx area of the circle is  %f ",result);

    return 0;

}



