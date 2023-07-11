// Task 5:
// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.




#include<stdio.h>


int main(){

   float ang1,ang2,ang3;

   printf("Enter the first angle of triangle: ");
   scanf("%f",&ang1);
   printf("Enter the second angle of triangle: ");
   scanf("%f",&ang2);
   printf("Enter the third angle of triangle: ");
   scanf("%f",&ang3);


if (ang1 + ang2 +ang3 == 180)
{
    printf("The triangle is valid\n");
}else{

    printf("The triangle is not valid\n");
}




    return 0;
}
