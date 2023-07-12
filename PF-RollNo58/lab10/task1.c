// Task 1:
// Write a program that accepts one string and then find the length of that string and print it.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter string: ");
    scanf(" %[^\n]s", str);

    int len = strlen(str);
    printf("\nLength of given String is: %d\n ", len);

    return 0;
}