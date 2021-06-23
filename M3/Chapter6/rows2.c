#include <stdio.h>

int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}

//左下三角形乘法表
/* int main(void)
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
} */