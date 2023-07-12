#include <stdio.h>

void fun(int *, int *)
{
    *i = *i * *i;
    *j = *j * *j;
}

int main()
{

    int i = 5, j = 2;
    fun(&i, &j);
    printf("%d %d\n", i, j);

    return 0;
}

// again in this program the fun function hasn't been decleared variable name in its paramerter.