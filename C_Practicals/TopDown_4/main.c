#include <stdio.h>
#include <stdlib.h>

int input();
int compare(int, int);
void output(int);

int input()
{
    int num_1, num_2;
    //Read first integer
    printf("Enter integer 1:");
    scanf("%d", &num_1);
    //Read second integer
    printf("Enter integer 2:");
    scanf("%d", &num_2);
    return (num_1, num_2);
}

int compare(int num_1, int num_2)
{
    int big;
    if(num_1 > num_2){
        big = num_1;
    }
    else{
        big = num_2;
    }
    return big;
}

void output(int big)
{
    printf("The larger value is: %d", big);
}

void main()
{
    int a, b, c;
    a, b = input();
    c = compare(a, b);
    output(c);
}
