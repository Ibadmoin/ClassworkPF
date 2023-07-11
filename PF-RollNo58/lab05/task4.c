
// Task 4:
// If the ages of three students are input through the keyboard, write a program to determine the youngest of the three.


#include<stdio.h>


int main(){

    int std1,std2,std3;
    printf("Enter student 1 age: ");
    scanf("%d",&std1);
    printf("Enter student 2 age: ");
    scanf("%d",&std2);
    printf("Enter student 3 age: ");
    scanf("%d",&std3);

    if (std1 < std2 && std1 < std3)
    {
        printf("Student 1 is youngest!\n");
    }else if (std2 < std1 && std2 <std3)
    {
        printf("Student 2 is youngest!\n");
    }else {
        printf("Student 3 is youngest!\n");

    }
    
    




    return 0;
}