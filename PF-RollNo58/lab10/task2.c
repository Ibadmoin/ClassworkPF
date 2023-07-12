// Task 2:
// Write a program that takes input in a string (char array) and ‘find’ a particular character and ‘replace’ that character. The program should replace all the occurrences of that particular character with the new character.
// For example:
// Array: “I love programming” find character: ‘m’
// replace with character: ‘n’
// then the string should become “I love progranning”

#include <stdio.h>
#include <string.h>

int main()
{

    char str[50];
    char findChar, replaceChar;
    printf("Enter strings: ");
    scanf(" %[^\n]s", str);

    printf("Enter character to find: ");
    scanf(" %c", &findChar);
    printf("Enter character to replace with: ");
    scanf(" %c", &replaceChar);

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == findChar)
        {
            str[i] = replaceChar;
        }
    }

    printf("Modified strings is: %s", str);

    return 0;
}
