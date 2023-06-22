// Task 1:

// An electric power distribution company charges its domestic consumers as follows.

// Consumption Units	Rate of Charge

// 	0-200	Rs.0.50 per unit

// 	201-400	Rs.100 plus Rs.0.65 per unit excess 200

// 	401-600	Rs.230 plus Rs.0.80 per unit excess of 400.


#include<stdio.h>



int main(){

    int units;
    float charges;
    char choice;

    do
    {
        printf("Enter your comsumpation Units: ");
        scanf("%d",&units);
        if (units <= 200)
        {
            charges = units * 0.50;
        } else if (units <= 400)
        {
         charges = 100 +(units - 200) *0.65;
        } else if (units <= 600)
        {
            charges= 230+(units-400) *0.80;
        } else {
            printf("Tumhara alag hisab hoga upper xd!");
            continue;
        }

        printf("The total charges is %.2f \n",charges);
        printf("Do you want to calculate charges for another consumer (y/n): ");
        scanf(" %c",&choice);
        
        
        
    } while (choice == 'y' || choice == 'Y');
    

    



    return 0;
}