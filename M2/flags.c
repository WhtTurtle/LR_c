#include <stdio.h>

int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    return 0;
}

/* 第2行输出演示了如何在转换说明中用空格在输出的正值前面生成前导空格，负值前面不产生前导空格。
这样的输出结果比较美观，因为打印出来的正值和负值在相同字段宽度下的有效数字位数相同。
第3行输出演示了如何在整型格式中使用精度（％5.3d）生成足够的前导0以满足最小位数的要求（本例是3）。
然而，使用0标记会使得编译器用前导0填充满整个字段宽度。最后，如果0标记和精度一起出现，0标记会被忽略。 */