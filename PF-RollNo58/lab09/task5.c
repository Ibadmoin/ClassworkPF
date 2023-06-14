#include<stdio.h>


// 5- Write a function that receives 5 integers and returns the sum, and average of these numbers. Call this function from main( ) and print the results in main( ).  

void calculateSumAndAvg(int num1, int num2, int num3, int num4, int num5){
    int sum = num1+num2+num3+num4+num5;
    float average = (num1+num2+num3+num4+num5)/5;
    printf("The sum is %d\n",sum);
    printf("The average is %.1f",average);

}
int main(){
    int num1,num2,num3,num4,num5;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    calculateSumAndAvg(num1,num2,num3,num4,num5);
    return 0;
}