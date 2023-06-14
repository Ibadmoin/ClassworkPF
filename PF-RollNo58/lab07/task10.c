#include<stdio.h>

// Task 10:
// Assume that the salesmen of a company are paid a commission based on the number of sales made during a week. The staff is paid a commission of $8 for sales less than 15, $12 for 15 sales, and $16 if sales exceed 15. Find the commission for each salesman, if the total number of salesmen in the company are taken input from the user


int main(){
    int salesman, sales;
    printf("Enter the number of salesmen: ");
    scanf("%d", &salesman);
    // for(int i = 0; i < salesman; i++){
    //     printf("Enter the number of sales: ");
    //     scanf("%d", &sales);
    //     if(sales < 15){
    //         printf("Commission: $8\n");
    //         }
    //         else if(sales == 15){
    //             printf("Commission: $12\n");
    //         } else {
    //             printf("Commission: $16\n");
    //         }
    //         }


    // while-loop //
int i = 0;
    // while (i < salesman)
    // {
    //     printf("Enter the number of sales: ");
    //     scanf("%d", &sales);
    //     if (sales < 15){
    //         printf("Commission: $8\n");
    //     } else if (sales == 15)
    //     {
    //         printf("Commission: $12\n");
        
    //     } else {
    //         printf("Commission: $16\n");
    //     }
    //     i++;

    // }
    

// do-while loop //

do
{
    printf("Enter the number of sales: ");
    scanf("%d", &sales);
    if (sales < 15)
    {
        printf("Commission: $8\n");
    } else if (sales == 15)
    {
        printf("Commission: $12\n");
    } else {
        printf("Commission: $16\n");
    }
    i++;
    
    

} while (i < salesman);



    return 0;
}