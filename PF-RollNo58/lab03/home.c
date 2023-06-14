/*Take values of length and breadth of a rectangle from user and check if it is square or not.*/
#include<stdio.h>

int main(){
    int lenght,breadth;
    printf("Enter the lenght of the Rectangle : ");
    scanf("%d",&lenght);
    printf("Enter the breadth of the Rectangle : ");
    scanf("%d",&breadth);

    // if (lenght == breadth)
    // {
    //     printf("Its a Square!");
    // } else{
    //     printf("It is not a Square!");

    // }
    
printf("Its a %s \n", lenght!=breadth ?  "Rectangle" : "Square");
    return 0;
}