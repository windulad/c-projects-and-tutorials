#include <stdio.h>
#include <stdlib.h>

void disp(int *p)
{
    printf("%d\n", *p);
    printf("%d\n", *(p + 3));
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    disp(&a);
    return 0;
}
