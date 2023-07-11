#include<stdio.h>

void address(int *count) {
    *count = 2;
}

int main(){

    int count;
    printf("%u\n",count);

  address(&count);
printf("%d", count);
    



    return 0;
}