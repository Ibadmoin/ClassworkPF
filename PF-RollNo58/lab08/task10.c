// Task 10:
// Write a loop which will produce the following output.


#include<stdio.h>


int main(){

    int n;
    printf("Enter integer for n: ");
    scanf("%d",&n);

    int i = 1;
    do
    {
        int j = 1;
        do
        {
            printf("%d ",i);
            j++;
        } while (j<=i);
    
        printf("\n");
        i++;
    } while (i<=n);
    


    return 0;
}