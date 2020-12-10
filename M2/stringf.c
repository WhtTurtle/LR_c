#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    return 0;
}

/* 注意，虽然第1个转换说明是％2s，但是字段被扩大为可容纳字符串中的所有字符。
还需注意，精度限制了待打印字符的个数。.5告诉printf()只打印5个字符。
另外，-标记使得文本左对齐输出。 */