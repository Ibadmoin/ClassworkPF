#include<stdio.h>
#include<string.h>

int main(){
int num1,num2;
char lang[10];
printf("number lickhio: ");
scanf("%d",&num1);
printf("Dosro Number lickhio: ");
scanf("%d",&num2);

printf("tuhan jo sindhi ahan: ");
scanf("%s",&lang);

if (strcmp(lang, "yes") == 0 || strcmp(lang, "han") == 0)

{
     //for sum
    int sum = num1 + num2;
    printf("The Sum of %d and %d is %d \n",num1,num2,sum);
    //for substraction
    int sub = num1 - num2;
    printf("The Subtraction of %d and %d is %d \n",num1,num2,sub);
    //for multiplication
    int mult = num1*num2;
    printf("The multiplication of %d and %d is %d \n",num1,num2,mult);

  
//for division
    if(num2 == 0) {
                printf("Error: Cannot divide by zero \n");
            } else {
                int div = num1 / num2;
                printf("Result: %d / %d = %d \n", num1, num2, div);
            }

        //For square 
            int num3;
            printf("Enter the number for its Square: ");
            scanf("%d",&num3);
            int square = num3* num3;
            printf("The square of %d is: %d \n ",num3,square);


            // for cube
              int num4;
            printf("Enter the number for its Cube: ");
            scanf("%d",&num4);
            int cube = num4 *num4*num4;
            printf("The square of %d: is %d \n ",num4,cube);

} else{
    printf("code sindhi mein hai ja mera puttr chuti kr");
}

    return 0;
}