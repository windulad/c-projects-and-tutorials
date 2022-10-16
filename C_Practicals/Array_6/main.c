#include <stdio.h>
#include <stdlib.h>

void main()
{
    int line[5] = {0};
    int *p;

    for(p = &line[0]; p <= &line[4]; p++)
    {
        printf("Enter an integer: \n");
        scanf("%d", p);
    }

    for(p = &line[0]; p <= &line[4]; p++)
    {
        printf("Entered values: %d\n", *p);
    }
}
