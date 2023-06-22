// Task 2:
// Write a C program that allows the user to enter in 5 grades, ie, marks between 0 - 100. The program must calculate  the average mark, and state the number of marks less than 65.


#include<stdio.h>


int main(){

    int marks[5];
    int sum = 0;
    int i = 0;
    int subLessThan60=0;
    do
    {
        printf("Enter marks for subject %d: ",i+1);
        scanf("%d",&marks[i]);
        if(marks[i] > 100 || marks[i] < 0){
            printf("Invalid marks Please enter it again!\n");

        }else {
            if (marks[i]< 60)
            {
                subLessThan60++;
            }
            sum += marks[i];
            i++;
            
        }
    } while (i < 5);

printf("The average of marks is %.1f\n",(float)sum/i);
printf("The subject less than 60 marks are %d",subLessThan60);

    
    




    return 0;
}