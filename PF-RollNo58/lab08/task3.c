// Task 3:
// Write a program that will generate even numbers and calculate sum and average of those numbers.
#include<stdio.h>


int main(){

    int n;
    int sum = 0;
    int count = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
int i= 2;
    do
    {
        printf("%d",i);
        sum = sum + i;
        i+=2;
        count++;
        
    } while (i<=n);
    printf("\n");
    printf("The sum is %d\n",sum);
    printf("The average is %d\n",sum/count);



    return 0;
}