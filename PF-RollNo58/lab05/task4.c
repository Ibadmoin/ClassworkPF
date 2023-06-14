#include<stdio.h>

// Task 4:
// Write a program for quiz, where the system asks question and user will select answer from 
// the given four options. On correct answer the program will congratulate and on wrong answer 
// print sorry message.
 
int main(){
printf("Question: What is the primary component responsible for the greenhouse effect on Earth? \n Options: \n");
printf("a) Carbon monoxide (CO) \nb) Methane (CH4) \nc) Nitrous oxide (N2O) \nd) Carbon dioxide (CO2)\n\nSelect any option : ");
char opt;
scanf("%c",&opt);
if(opt=='d'){ 
    printf("Congratulations! Your answers is correct.");
} else{
    printf("Sorry! Your answers is wrong.");
}


    return 0;
}