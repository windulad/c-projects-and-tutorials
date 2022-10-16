#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main()
{
    int x = 20, y = 30;
    printf("Sum is: %d\n", add(x, y));
}

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
