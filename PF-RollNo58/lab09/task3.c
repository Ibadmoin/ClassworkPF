#include<stdio.h>


// 3-Write a general-purpose function to convert any given year into its roman equivalent. The following table shows the roman equivalents of decimal numbers:  
void roman(int year);
void print_roman(char symbol, int count){
    for(int i = 0; i < count;i++){
        printf("%c",symbol);

    }
}
int main(){

    roman(1988);

    return 0;
}

void roman(int year){

    int thousand = year / 1000;
    year %= 1000;

    print_roman('M',thousand);

    if (year >= 500)
    {
        printf("D");
        year = year - 500;
    } 
    int hundreds = year / 100;
    year %= 100;
    print_roman('C',hundreds);

    if (year >= 50)
    {
        printf("I");
        year -= 50;
    } 

    int tens = year /10;
    year %= 10;
    print_roman('X',tens);
    if (year >= 5)
    {
        printf("V");
        year -= 5;
    } else if (year >= 1)
    {
        printf("I");
        year -= 1;
    }
    print_roman('I',year);
    printf("\n");

    
    
    

}