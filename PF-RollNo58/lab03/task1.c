// Task 01: Create a program that will take subject marks as input and show individual percentage, total marks obtain and total percentage.

// Subject	Marks Obtain	Total Mark	Percentage
// English	35	100	35%
// Urdu	40	100	40%
// Islamiat	60	100	60%

// Total Marks	
// 135	
// 300	
// 45%

#include<stdio.h>

int main(){
   float eng,urdu,islamiat;
   float total_marks = 100;
   char sign = '%';
   printf("Enter obtain marks of English : ");
   scanf("%f",&eng);
   printf("Enter obtain marks of Urdu : ");
   scanf("%f",&urdu);
   printf("Enter obtain marks of Islamiat  : ");
   scanf("%f",&islamiat);
printf("Subject     Marks Obtain     Total Marks     Percentage \n");
float percent1 = eng/total_marks*100;

printf("English          %.0f              %.0f              %.0f%c  \n",eng,total_marks,percent1,sign);
printf("Urdu             %.0f              %.0f              %.0f%c  \n",urdu,total_marks,(urdu/total_marks)*100,sign);
printf("Islamiat         %.0f              %.0f              %.0f%c  \n",islamiat,total_marks,(islamiat/total_marks)*100,sign);
printf("Total Marks      %.0f              %.0f              %.0f%c  \n",islamiat+eng+urdu,total_marks*3,(islamiat/total_marks)*100 +(eng/total_marks)*100+(urdu/total_marks)*100,sign);

    return 0;
}
