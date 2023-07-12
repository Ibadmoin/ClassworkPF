//a. write a function that recieves 5 integers and returns the sum, average and standard deviation of these numbers, call this functions from main() and prints the result in main().


#include<stdio.h>
#include<math.h>

void calculate(int num1, int num2, int num3, int num4, int num5, int* sum, double* average, double* stdDev ){

    *sum = num1 + num2 + num3+ num4+num5;
    *average = (double)(*sum)/5;

    double squareSum = pow(num1 - *average, 2) +
                        pow(num2 - *average, 2) +
                        pow(num3 - *average, 2) +
                        pow(num4 - *average, 2) +
                        pow(num5 - *average, 2);

*stdDev = sqrt(squareSum/5);

}

int main(){
        int num1, num2, num3, num4, num5;
    int sum;
    double average, stdDev;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    calculate(num1, num2, num3, num4, num5, &sum, &average, &stdDev);

    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);
    printf("Standard Deviation: %lf\n", stdDev);

    return 0;
}