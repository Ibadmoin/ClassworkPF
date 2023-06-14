/*Task02:
Convert the following equations into corresponding C statements and show the results in separate programs.
*/ 
/*
Assuming the following values of the variables:

a = 3	g = 6	v = 7
b = 2.2	m = 8	x = 8
c = 5	q = 1	y = 3.5
d = 3	r = 5.5	
*/
/**/
#include<stdio.h>
int main(){
float a = 3,g = 6,v = 7,
b = 2.2,m = 8,x = 8,c = 5,q = 1,y = 3.5,d = 3,r = 5.5;	

float Z = (8.8*(a+b)*2/c-0.5+2*a/(q+r)) / ((a+b)*(1/m));
printf("Z is equal to = %f \n",Z);

float X = (-b+(b*b)+24*a*c) / (2*a);
printf("X is equal to = %f \n",X);

float R = (2*v+6.22*(c+d)) / (g+v);
printf("R is equal to = %f \n",R);

float A = (7.7*b*(x*y+a)/c-0.8+2*b) / ((x+a)*(1/y)) ;
printf("A is equal to = %f \n",A);


    return 0;
}