#include <stdio.h>
#include <stdlib.h>

float Vol(float);

void main()
{
    float S;
    printf("Enter side length: ");
    scanf("%f",&S);
    printf("The volume of the cube: %.2f",Vol(S));
}

float Vol(float A)
{
    float X = A * A * A;
    return X;
}
