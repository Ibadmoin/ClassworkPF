#include<stdio.h>


int main(){
    int Total,qty,rate;
    printf("Enter the quantity of item : ");
    scanf("%d",&qty);
    printf("Enter the rate of the product : ");
    scanf("%d",&rate);



    if ( qty > 1000  )
    {
        Total = qty*rate - qty*rate*0.1;
        printf("Your Total is : %d Rs",Total);
    
    } else{
        printf("Your Total is : %d Rs",qty*rate);

    }
    


    return 0;
}