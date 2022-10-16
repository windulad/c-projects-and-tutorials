#include <stdio.h>
#include <stdlib.h>

void main()
{
    char string[] = "HELLO WORLD";
    int m;

    for(m = 0; m <= 11; m++)
    {
        if((m % 2) == 0)
        {
            printf("%c", string[m]);
        }
    }
}
