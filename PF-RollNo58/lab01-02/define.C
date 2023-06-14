#include<stdio.h>

#define Name "Muhammad hanzala"
#define rollno "22F-BSAI-58"

int main(){
// printf("My name %s and RollNo. is %s ",Name,rollno);
//    return 0; 
int count = 5;
float Miles = 5.6;
char letter = 'x';
double Atoms = 2500000;

printf("\n int %d \n float %f \n char %c \n double %lf \n",count,Miles,letter,Atoms);
printf("Address in Integers  \n int %d \n float %d \n char %d \n double %d \n",&count,&Miles,&letter,&Atoms);
printf("Address in Characters :\n int %c \n float %c \n char %c \n double %c \n",&count,&Miles,&letter,&Atoms);
printf("Address in Hexa decimal  : \n int %x \n float %x \n char %x \n double %x \n",&count,&Miles,&letter,&Atoms);

return 0;
} 