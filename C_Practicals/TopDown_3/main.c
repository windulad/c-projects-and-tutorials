#include <stdio.h>
#include <stdlib.h>

int input()
{
    int in;
    printf("Enter inches: ");
    scanf("%d", &in);
    return in;
}

int calc(int in)
{
    int yd, ft;
    yd = in / 36;
    in = in % 36;
    ft = in / 12;
    in = in % 12;
    return yd, ft, in;
}

void output(int yd, int ft, int in)
{
    printf("%d yards, %d feet, %d inches", yd, ft, in);
}

void main()
{
    int a, b, c, d;

    a = input();
    b, c, d = calc(a);
    output(b, c, d);
}
