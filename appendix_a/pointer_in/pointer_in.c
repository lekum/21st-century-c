#include <stdio.h>

void double_in(int *in)
{
    *in *= 2;
}

int main()
{
    int x = 10;
    double_in(&x);
    printf("x now points to %i.\n", x);
}

