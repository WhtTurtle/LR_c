#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
}

/* 在小数点的右侧打印6个数字。这样打印的数字太多！
解决方案是指定小数点右侧显示的位数，程序中接下来的 4 个例子就是这样做的。
请注意，第4个和第6个例子对输出结果进行了四舍五入。另外，第6个例子用E代替了e。
第7个转换说明中包含了+标记，这使得打印的值前面多了一个代数符号（+）。0标记使得打印的值前面以0填充以满足字段要求。 */