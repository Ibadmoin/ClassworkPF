#include<stdio.h>

// Task 1:
// . A dice is rolled n number of times. Show the possible outcomes of dice. For example, if a dice is rolled twice the possible outcomes would be:


int main(){
    int n;
    printf("Enter the number of times the dice is rolled: ");
    scanf("%d", &n);
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=6; j++){
            printf("Dice (%d,%d)\n", i, j);
            }
            }
            


    return 0;
}