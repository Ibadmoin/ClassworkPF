#include<stdio.h>


// 2- Write a function power (a, b) to calculate the value of ‘a’ raised to the power of ‘b’. 


int power(int a, int b);
int main(){

int a =4;
int b = 4;
power(a,b);

    return 0;
}


int power(int a, int b){
     int result = 1;
    if(b==1 || b == 0 ){
        printf("%d", a );
    } else {
      for (int i = 0; i < b; i++)
      {
      
       result *= a;
        // printf("%d",i);
      }
      printf("The value is %d",result);
      
        
        

    }


}