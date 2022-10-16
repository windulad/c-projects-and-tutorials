#include<stdio.h>

int multi(int a,int b)
{
    int c;
    c = a * b;
    return(c);
}

int div(int a,int b)
{
    int c;
    c = a / b;
    return(c);
}

int main()
{
    int x,y;
    x = 10;
    y = 5;
    int z = multi(x,y);
    int k = div(x,y);
    printf("Product is %d\n",z);
    printf("Division is %d\n",k);
}
