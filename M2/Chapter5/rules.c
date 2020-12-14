#include <stdio.h>

int main(void)
{
    int top, score;
    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);
    return 0;
}

/* 现在，表达式是：
top = score = -7 * 6 + (4 + 3 * (2 + 3))
下一步，计算2 + 3的值。表达式变成：
top = score = -7 * 6 + (4 + 3 * 5)
接下来，因为圆括号中的*比+优先级高，所以表达式变成：
top = score = -7 * 6 + (4 + 15)
然后，表达式为：
top = score = -7 * 6 + 19
-7乘以6后，得到下面的表达式：
top = score = -42 + 19
然后进行加法运算，得到：
top = score = -23 */