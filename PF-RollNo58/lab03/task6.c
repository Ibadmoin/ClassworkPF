/*
Task 07: In a town, the percentage of men is 52. The 
percentage of total literacy is 48. If total percentage of 
literate men is 35 of the total population, write a program to find the total number of 
illiterate men and women if the population of the town is 80,000.
*/
#include<stdio.h>

int main(){
    float men = 0.52, total_literate = 0.48, tliterate_men = 0.35;
    float population = 80000;
    // if total literate is 48% or 0.48 then total illiterate men and women will be 
    // 100-48 = 52 %  or 0.52 so then
 float total_illiteratep = 1 - total_literate;
    float t_illiterate = population*total_illiteratep;
    printf("The total number of illiterate men and women is %.0f if the population of town is %.0f",t_illiterate,population);




    return 0;
}