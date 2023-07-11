//there is a strucuture called employee that holds information like employee code, name and date of joing. Write a program to create an array of strucutres and enter some data into it.then ask ther user to enter current date.Display the names of those smployees whose tenure is greater than equal to 3 years.

#include<stdio.h>
#include<string.h>

#define MAX_EMPLOYEES 20
struct employee
{
    int empCode;
    char name[50];
    char joingDate[11];

};

int main(){
    struct employee employees[MAX_EMPLOYEES];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++)
    {
        printf("Enter details for Employee %d:\n", i+ 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].empCode);
        printf("Name: ");
        scanf(" %s",employees[i].name);
        printf("Joining Date (YYYY-MM-DD): ");
        scanf("%s", employees[i].joingDate);
    }

    char currentDate[11];
    printf("Enter the current date (YYYY-MM-DD): ");
    scanf("%s", currentDate);
    

    printf("\nEmployees with Tenure >= 3 Years:\n");
    for (int i = 0; i < numEmployees; i++)
    {
        int joiningyear;
        sscanf(employees[i].joingDate, "%d", &joiningyear);

        int currentYear;
        sscanf(currentDate ,"%d", &currentYear);

        int tenure = currentYear - joiningyear;
        if (tenure >= 3)
        {
        printf("%s\n", employees[i].name);
        }
        
    }
    

    return 0;
}



