#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x = 125;
    int *p = &x;

    printf("%d is stored at address %p\n",x,&x);
    printf("%d is stored at address %u\n",x,p);
}
