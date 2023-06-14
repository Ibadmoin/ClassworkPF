#include<stdio.h>


int main(){
int event=5; char heat = 'C';
float time = 27.25;

printf("The wining time in heat %c \n", heat);
printf("of event %d was with out field-width is %f\n", event, time); printf("of event %d was with field-width is %.2f", event, time);

return 0;
}
