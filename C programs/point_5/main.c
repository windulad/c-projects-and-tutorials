#include <stdio.h>
#include <stdlib.h>

void main()
{
    char letters[3] = {'A','B','C'};
    char *ptr = letters;
    char test = *(ptr + 2);

    printf("%c\n",test);
}
