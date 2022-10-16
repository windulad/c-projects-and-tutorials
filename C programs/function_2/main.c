#include <stdio.h>
#define PI 3.14

float calculatearea(float R)
{
    return(PI * R * R);
}

void main()
{
    float R;
    float calculatearea(float);

    printf("Input the radius: ");
    scanf("%f",&R);
    printf("The area is %.2f",calculatearea(R));
}
