#include<stdio.h>

int main(){

    int arr[5] = {20,10,20,37,19};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j]> arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= arr[j];
            }
            
        }
        
    }
    

int i = 0;
while (i < 5)
{
    printf("%d ",arr[i]);
    i++;
}



    return 0;
}