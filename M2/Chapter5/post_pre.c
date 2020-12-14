#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++;   //后缀递增  a_post = a; a = a + 1; 
    pre_b = ++b;    //前缀递增  b = b + 1; pre_b = b;
    printf("a   a_post  b   pre_b   \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
    return 0;
}