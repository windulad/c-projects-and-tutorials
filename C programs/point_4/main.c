#include<stdio.h>

void main()
{
    int u = 3;
    int v;
    int *pv;
    int *pu;

    pu = &u;
    v = *pu;
    pv = &v;

    printf("\n u = %d, &u = %p, pu = %p, *pu = %d",u,&u,pu,*pu);
}
