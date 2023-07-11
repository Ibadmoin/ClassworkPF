#include <stdio.h>

// Task 1:
// If the ages of Ali, Sarah and Ahmed are input through the keyboard,
// write a program to determine the youngest of the three, using ternary operator.

int main()
{
    int age_Ali, age_Sarah, age_Ahmed;
    printf("Enter the ages of Ali, Sarah and Ahmed : ");
    scanf("%d %d %d", &age_Ali, &age_Sarah, &age_Ahmed);

    age_Ali < age_Sarah && age_Ali < age_Ahmed ? printf("Ali's age is youngest!") : 
    age_Sarah < age_Ali && age_Sarah < age_Ahmed ? printf("Sarah's age is youngest!") :
    printf("Ahmed's age is youngest!");
      return 0;
}


// tips logical operators can be used for multple comparsions!
