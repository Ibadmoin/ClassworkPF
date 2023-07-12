// Task 8:

// In a bitmap file black is represented by 1 and white by 0. Create a 8X8 pattern and initialize using following data: 1 1 1 0 0 1 1 1
// 1 0 0 0 0 0 1 0
// 1 1 1 1 1 1 0 0
// 1 1 1 0 0 0 1 0
// 1 0 1 0 1 0 1 0
// 0 0 0 0 0 0 0 0
// 1 1 1 1 1 1 1 1
// 0 0 0 0 1 1 1 1

#include <stdio.h>

int main()
{
    int pattern[8][8] = {
        {1, 1, 1, 0, 0, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 1, 0},
        {1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 1, 1, 1, 1}};

    printf("Intialized pattern\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }

    return 0;
}
