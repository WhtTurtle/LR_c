/* 这是一个有错误的程序，用双斜杠注释的为原本的错误地方 */

#include <stdio.h>

int main(void)
//(
{
    //int n, int n2, int n3;
    int n, n2, n3;
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    //printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
    return 0;
}
//)