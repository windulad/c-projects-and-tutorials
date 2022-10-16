#include <stdio.h>
#include <stdlib.h>

int power(int, int);

void main()
{
    int a, b;
    printf("Enter two integers for x and n: ");
    scanf("%d %d", &a, &b);
    printf("%d to the power of %d is: %d ", a, b, power(a, b));
}

int power(int x, int y)
{
    int ans = 1;
    int count = 1;

    while(count <= y)
    {
        ans = ans * x;
        count = count + 1;
    }

    return ans;
}
