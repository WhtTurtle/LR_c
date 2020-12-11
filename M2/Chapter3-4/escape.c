/* escape.c ———— 使用转移序列 */

#include <stdio.h>

int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary : ");  /* 1 */
    printf("$_______\b\b\b\b\b\b\b");  /* 2 */
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);  /* 3 */
    printf("\rGee!\n");  /* 4 */
    return 0;
}

/* 第3条printf()语句中的字符串以\n\t开始。换行字符使光标移至下一行起始处。水平制表符
使光标移至该行的下一个制表点，一般是第9列（但不一定）。
第4条printf()语句以\r开始。这使得光标回到当前行的起始点。接着\n使光标移至下一行的
起始处。 */