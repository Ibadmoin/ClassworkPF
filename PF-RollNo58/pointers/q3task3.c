//d. Given three variables x, y, z write a function to circularly shift their values to right. In other words if x = 5, y = 8, z= 10, after circular shift y = 5, z =8, x = 10. Call the function with variables a, b, c to circularly shift values.
 #include <stdio.h>

void circularShift(int* x, int* y, int* z) {
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

int main() {
    int x, y, z;

    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("Enter the value for y: ");
    scanf("%d", &y);
    printf("Enter the value for z: ");
    scanf("%d", &z);

    circularShift(&x, &y, &z);
    circularShift(&x, &y, &z);

    printf("After circular shift:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
