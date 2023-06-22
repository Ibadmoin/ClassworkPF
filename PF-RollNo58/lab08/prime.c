#include<stdio.h>



int main(){

    int n = 9;

    if (n <=1)
    {
        printf("Its not a prime number!");
    } for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            break;
        }else {
            printf("its a prime number!");
        }
        
    }
    
    


    return 0;
}
