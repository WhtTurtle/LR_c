#include <stdio.h>

void two(void);
void one_three(void);
int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
}

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}