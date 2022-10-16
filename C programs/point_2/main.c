#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch = 'A';
    int x = 125;
    float p = 10.25,q = 18.25;

    printf("%c is stored in address %p\n",ch,&ch);
    printf("%d is stored in address %p\n",x,&x);
    printf("%.2f is stored in address %p\n",p,&p);
    printf("%.2f is stored in address %p\n",q,&q);
}
