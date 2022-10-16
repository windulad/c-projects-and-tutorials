#include<stdio.h>

static int i = 5;
void foo()
{
    i = i + 100;
    printf("%d\n",i);
}
