#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    printf("Enter your name: ");
    gets(name);
    printf("Your name is: %s",name);
    //puts(name);
    return 0;
}
