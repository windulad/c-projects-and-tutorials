#include <stdio.h>
#include <stdlib.h>

int sumOfSqrs(int);

void main()
{
    int a;
    printf("Enter the power: ");
    scanf("%d", &a);
    printf("The sum of squares is: %d", sumOfSqrs(a));
}

int sumOfSqrs(int x)
{
    int sum = 0;
    for(int i = 1; i <= x; i++)
    {
        sum += (i * i);
    }
    return sum;
}
