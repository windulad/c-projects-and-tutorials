#include <stdio.h>
#include <stdlib.h>

int area(int, int);

int main()
{
    int x = 10, y = 5;
    int z = area(x, y);
    printf("Area is: %d\n",z);
}

int area(int l, int w)
{
    int area;
    area = l * w;
    return area;
}
