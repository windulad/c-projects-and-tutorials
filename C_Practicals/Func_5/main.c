#include <stdio.h>
#include <stdlib.h>

int Large(int, int);

void main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Larger value is: %d", Large(a, b));
}

int Large(int x, int y)
{
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}
