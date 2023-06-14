/*Task 04: The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to 
calculate the area & perimeter of the rectangle, and the area & circumference of the circle.*/
#include<stdio.h>

int main(){
    float lenght,breadth,radius;
    printf("Enter the lenght of the rectangle : ");
    scanf("%f",&lenght);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&breadth);
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    float area = lenght*breadth;
    printf("The approx area of the rectangle is %.2f \n",area);

// parimeter = 2l+2w

    float parimeter = 2*lenght+2*breadth;
    printf("The approx parimeter of the rectangle is %.2f \n",parimeter);

    float  c_area = 3.142*radius*radius;
    printf("The area of the circle is %.2f \n",c_area);
    float  circumference = 2*3.142*radius;
    printf("The Circumference of the circle is %.2f \n",circumference);


    return 0;
}