// Task 7:

// Write a program to print all Prime numbers between 1 to n.



#include<stdio.h>

int main(){

    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("The prime numbers between 1 & %d are: ",n);
i = 2;
do
{
    j = 2;
    int isPrime = 1;
    do
    {
        if (i%j==0)
        {
            isPrime = 0;
            break;
        }
        j++;
    } while (j<i);
    if (isPrime)
    {
        printf("%d ",i);
    }
    
    
    i++;
} while (i<=n);

    


    return 0;
}