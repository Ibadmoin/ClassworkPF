#include<stdio.h>


int main(){

    int current = 0;
    int next = 1;
    printf("%d ",current);
    for (int i = 0; i < 100; i = next)
    {
        printf("%d ",next);
        int temp = current;
        current = next;
        next = next + temp;
    }
    
}