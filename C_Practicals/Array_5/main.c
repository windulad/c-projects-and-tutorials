#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, sum = 0;
    int x[5] = {5, 9, 6, 3, 7};

    //printf("Element value address");
    for(p = &x[0]; p <= &x[4]; p++)
    {
        sum += *p;
        //printf("Sum: %d\n", sum);
    }
    printf("Sum: %d\n", sum);
}
