//b. write a function that recives marks recived by a student in 3 subjects and return the average and percentage of these marks call this function from main() and print the result in main().

#include<stdio.h>

void averageCal(float sub1, float sub2, float sub3, float* average ){
    *average = (sub1+sub2+sub3)/3 ; 
}
void percent(float sub1, float sub2, float sub3, float total, float* percentage){
    *percentage = (sub1+sub2+sub3)/total*100;
}
int main(){
    float sub1,sub2,sub3;
    float average,percentage,total;

    printf("Enter marks for first subject: ");
    scanf("%f",&sub1);
    printf("Enter marks for second subject: ");
    scanf("%f",&sub2);
    printf("Enter marks for third subject: ");
    scanf("%f",&sub3);

    printf("Enter Total marks of all subjects together: ");
    scanf("%f",&total);

averageCal(sub1, sub2, sub3, &average);
percent(sub1, sub2, sub3, total, &percentage);

printf("The average marks are: %.2f\n",average);
printf("The percentage is : %.2f",percentage);


    return 0;
   

}
