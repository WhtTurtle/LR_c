#include <stdio.h>

int main()
{
    short int x;
    char x0, x1;
    x = 0x1122;

    x0 = *((char *)&x);
    x1 = *((char *)&x + 1);

    printf("x0=%x\nx1=%x\n", x0, x1);
}