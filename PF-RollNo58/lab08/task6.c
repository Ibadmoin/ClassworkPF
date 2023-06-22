// Task 6:
// Write a program to output a table of values of the integers starting at 1 and their squares. Label the table at the top of the columns. For example, your output might look like this:

#include <stdio.h>

int main()
{
    int n,i = 1;
    printf("Enter an integer value for 'n': ");
    scanf("%d",&n);
    printf("Number \t Square\n");

    do
    {
        printf("%d \t %d",i,i*i);
        printf("\n");
        i++;
        
    } while (i <= n);
    

    return 0;
}
