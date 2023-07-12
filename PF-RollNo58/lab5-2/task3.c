// Task 3:
// DUET  has following grading scheme, write programming code to implement the grading scheme. Marks will be entered by the user:


#include<stdio.h>



int main(){

    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    switch (marks)
    {
    case 86 ... 100:
        printf("Grade: A\nCGPA: 4.0");
        break;
    case 82 ... 85:
        printf("Grade: A-\nCGPA: 3.67");
        break;
    case 78 ... 81:
        printf("Grade: B+\nCGPA: 3.33");
        break;
    case 74 ... 77:
        printf("Grade: B\nCGPA: 3.0");
        break;
    case 70 ... 73:
        printf("Grade: B-\nCGPA: 2.67");
        break;
    case 66 ... 69:
        printf("Grade: C+\nCGPA: 2.33");
        break;
    case 62 ... 65:
        printf("Grade: C\nCGPA: 2.0");
        break;
    case 58 ... 61:
        printf("Grade: C-\nCGPA: 1.67");
        break;
    case 54 ... 57:
        printf("Grade: D+\nCGPA: 1.33");
        break;
    case 50 ... 53:
        printf("Grade: D\nCGPA: 1.0");
        break;
        case 0 ... 49:
        printf("Grade: F\nCGPA: 0");
        break;
    
    default:
    printf("Invalid marks!");
        break;
    }



    return 0;
}