#include <stdio.h>
#include <stdlib.h>

struct student{
    int age;
    float weight;
};

int main()
{
    struct student s = {10, 20};
    *p = &s;
    printf("Age: %d\n", p -> age);
    printf("Weight: %f\n", p -> weight);
}
