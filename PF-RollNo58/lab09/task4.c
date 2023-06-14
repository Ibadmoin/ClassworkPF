#include<stdio.h>


// 4- Write a function which receives a float and an int from main( ), finds the product of these two and returns the product which is printed through main( )
float prod(float a, int b);

int main(){

    float a = 2.7;
    int b = 2;

float product = prod(a,b);
printf("%.1f",product);
    return 0;
}


float prod(float a,int b){

    return a*b;

}

