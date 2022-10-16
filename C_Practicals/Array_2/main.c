#include <stdio.h>
#include <stdlib.h>

void main()
{
    int line[14] = {0};
    char text[100] = {"F"};

    //Array line
    line[9] = 9;
    for(int i = 0; i < 14; i++)
    {
        printf("%d ", line[i]);
    }

    //Array Text
    text[19] = 'T';
    text[3] = text[19];
    for(int j = 0; j < 19; j++)
    {
        printf("%c ", text[j]);
    }
}
