//Task 05: Take two integers as input from the user and swap the values.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter first integer : ");
    scanf("%d",&a);
    printf("Enter second integer : ");
    scanf("%d",&b);

    c = a;  // if a = 4; b = 6; then  c = 4;
    a = b; // here a = b so a = 6;
    b = c;// b = c where b = 6; and c = 4; so b = 4; ("Values swaped!!") 

    printf("%d %d",a,b);


    return 0;
}