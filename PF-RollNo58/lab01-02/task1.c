// Task 01: Using scanf() and printf(),Create a program with the help of format specifiers to print your marks that include:

// Marks of Subject 1 Grad of Subject 1

// Marks of Subject 2 Grad of Subject 2

// Marks of Subject 3 Grad of Subject 3


#include<stdio.h>

int main(){
    int sub1,sub2,sub3;
    char ch1,ch2,ch3;

    printf("Enter the marks of three subjects : ");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    printf("Enter the Grades of three subjects : ");
    scanf(" %c %c %c",&ch1,&ch2,&ch3);
    printf("The Marks of subject 1 is  %d with Grade %c \n",sub1,ch1);
    printf("The Marks of subject 2 is  %d with Grade %c \n",sub2,ch2);
    printf("The Marks of subject 3 is  %d with Grade %c \n",sub3,ch3);

    return 0;
}
