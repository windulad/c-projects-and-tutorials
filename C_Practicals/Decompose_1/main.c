#include <stdio.h>
#include <stdlib.h>

int div(int, int);

int main()
{
    int x = 10, y = 5;
    int k = div(x, y);
    printf("Product is: %d\n",k);
}

int div(int a, int b)
{
    int c = a / b;
    return c;
}
