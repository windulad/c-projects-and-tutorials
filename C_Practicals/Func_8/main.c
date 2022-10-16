#include <stdio.h>
#include <stdlib.h>

char multi(int, int);

void main()
{
    int a, b;
    printf("Enter two digits: ");
    scanf("%d %d", &a, &b);
    printf("%d %d are multiples of each other: %c", a, b, multi(a, b));
}

char multi(int x, int y)
{
    if((x % y == 0) || (y % x == 0))
    {
        return 'T';
    }
    else
    {
        return 'F';
    }
}
