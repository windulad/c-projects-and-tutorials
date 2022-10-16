#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float area(float);

float main()
{
    float R;
    printf("Input the radius: \n");
    scanf("%f",&R);
    printf("Area of the circle: %.4f",area(R));
}

float area(float R)
{
    float A;
    A = PI * R * R;
    return A;
}
