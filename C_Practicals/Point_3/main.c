#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 1;
    int *p = &i, *q;
    q = p;
    *q = 5;
    printf("%d", *p);
}
