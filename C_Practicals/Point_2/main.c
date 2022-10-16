#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x = 5, *ptr = &x;

    *ptr = 4;

    printf("%d", *ptr);
}
