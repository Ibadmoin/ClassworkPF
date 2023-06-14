#include<stdio.h>
#include<math.h>

// Task 4:
// Write a program to calculate the result of the series accurate up to 7th digit: 
//x+(x^3)/3!+(x^5)/5!+…


int main(){

int x = 2;
int result =0;
    for (int i = 1; i <= 7; i = i +2)
    {
        int term = pow(x,i)/tgamma(x+1);
        result += term;
    printf("%d, and %d",i,x);

        
    }
    printf("The result is %d",result);
    

    return 0;
}