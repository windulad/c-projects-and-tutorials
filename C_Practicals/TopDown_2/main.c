#include <stdio.h>
#include <stdlib.h>

int input();
int calc(int);
void output(float);

int input()
{
    int cel;
    printf("Enter temp in Celsius: ");
    scanf("%d", &cel);
    return cel;
}

int calc(int cel)
{
    float fah;
    fah = 1.8 * cel + 32;
    return fah;
}

void output(float fah)
{
    printf("Temp in Fahrenheit: %.2f", fah);
    //return 0;
}

void main()
{
    int a,b;

    a = input();
    b = calc(a);
    output(b);
}
