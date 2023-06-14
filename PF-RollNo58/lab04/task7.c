#include<stdio.h>

/*Task 07: If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the seller has made profit or incurred loss. 
Also determine how much profit he made or loss he incurred.*/

int main(){
    int cost,sell;
    printf("Enter the cost price: ");
    scanf("%d",&cost);
    printf("Enter the sell price: ");
    scanf("%d",&sell);
int total  = sell - cost;

    if (total > 0)
    {
        printf("Hurray! you has made Profit of %d Rs.",total);
    } else if (total == 0)
    {
        
        printf("Sold on the cost price, Profit of %d Rs.",total);
    } else {
         int sign = total - 2*(total);
        printf("Alas! you has made loss of %d Rs.",sign);
    }
    
    
    return 0;
}