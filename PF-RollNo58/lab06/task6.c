#include<stdio.h>

// //Print the following series:
// // 1.	1,2,3,…………….30
// // 2.	1,2,2,3,3,4,4,5,…..50
// // 3.	0,1,1,2,3,5,8,…….100


int main(){
//     for (int i = 1; i <= 30; i++)
//     {
//         printf("%d\n",i);
//     }

// while loop //
int i =1;
while (i <=30)
{
    printf("%d ",i);
    i++;
}

// do-while loop //

do
{
    printf("%d ",i);
    i++;
} while (i <= 30);



// printf("\n Second series : \n");
//     // for second series 

//     for(int i = 1; i <= 100 ; i++ ){
//         printf("%d\n",(i+1)/2);
//     }

// while loop//

while (i <=50)
{
    printf("%d ",(i+1)/2);
    i++;
}

// do-ehile loop//

do
{
    printf("%d ",(i+1)/2);
    i++;
} while (i <=50);



//     printf("\n Third series \n ");

    // for third series;

    // 3.	0,1,1,2,3,5,8,…….100
    //(fibonaci series)

int current = 0;
int next = 1;
// printf("%d ",current);

// for (int i = 0; i <= 100; i = next)
// {
//     printf("%d ",next);
//     int temp = current;
//     current = next;
//     next = temp + next;



// }

// while loop//

// printf("%d ",current);
// while (next <= 100)
// {
//     printf("%d ",next);
//     int temp = current;
//     current = next;
//     next = temp + next;
// }


// do-while loop//

printf("%d ",current);
do
{
    printf("%d ",next);
    int temp = current;
    current = next;
    next = temp + next;
} while (next <=100);




    return 0;
}