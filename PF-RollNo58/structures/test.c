#include<stdio.h>
#include<string.h>


int main(){

struct date
{   
    int month;
    int day;
    int year;
};

    struct account
    {
        char name[80];
        char street[80];
        char city[80];
        long long int acct_no;
        char acct_type[20];
        float oldbalance;
        float newbalance;
        float payment;
        struct date lastpayment;
        
    }customer[5];


    // reading the value for each customer

    for (int i = 0; i < 1; i++)
    {
        printf("Enter customer details for customer %d:\n",i+1);

        printf("Name: ");
        scanf("%s", &customer[i].name);

        printf("Street: ");
        scanf("%s", &customer[i].street);

        printf("City: ");
        scanf("%s", &customer[i].city);

        printf("Account Number: ");
        scanf("%lld",&customer[i].acct_no);

        printf("Previous Balance: ");
        scanf("%f", &customer[i].oldbalance);

        printf("Current Payment: ");
        scanf("%f", &customer[i].payment);

        printf("Payment Date (mm dd yyyy): ");
        scanf("%d %d %d", &customer[i].lastpayment.month, &customer[i].lastpayment.day, &customer[i].lastpayment.year);
        customer[i].newbalance = customer[i].oldbalance - customer[i].payment;


        if (customer[i].payment>0 && customer[i].payment< 0.1*customer[i].oldbalance)
        {
            strcpy( customer[i].acct_type, "Overdue");
            
        }else if(customer[i].newbalance == 0 && customer[i].payment == 0){
            strcpy(customer[i].acct_type, "Delinquent");

        }else{
            strcpy(customer[i].acct_type, "Current");
        }
        


    }



// put this in loop with index ith value for each iteration so that it can give results for multiple users/customers
    

   printf("Name=> %s\nAccount Number=> %lld\nStreet=>  %s\nCity=> %s\nOld Balance=> %.2f\nCurrent Payment=> %.2f\nNew Balance=> %.2f\nAccount Status=> %s ",customer[0].name, customer[0].acct_no, customer[0].street, customer[0].city, customer[0].oldbalance, customer[0].payment, customer[0].newbalance, customer[0].acct_type);


    return 0;
}