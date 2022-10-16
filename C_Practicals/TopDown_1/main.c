#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int feet;
    int inches;
}distance;

distance dis1, dis2, tdis;

void input()
{
    //First distance
    printf("Enter feet: ");
    scanf("%d", &dis1.feet);
    printf("Enter inches: ");
    scanf("%d", &dis1.inches);
    //Second distance
    printf("Enter feet: ");
    scanf("%d", &dis2.feet);
    printf("Enter inches: ");
    scanf("%d", &dis2.inches);
}

void calculate()
{
    tdis.feet = (dis1.inches + dis2.inches)/12;
    tdis.feet += dis1.feet + dis2.feet;
    tdis.inches = (dis1.inches + dis2.inches)%12;
}

void output()
{
    printf("Total Feet: %d, Inches: %d", tdis.feet, tdis.inches);
}

void main()
{
    void input();
    void calculate();
    void output();
}
