#include <stdio.h>

#define CANCLE 0
#define START 1
#define Intell_three 2

int three_baby(unsigned int three_key)
{
    static int sig = 0;
    if (three_key == START || three_key == CANCLE)
        if (sig == 0)
            printf("Invalid key\n");
        else
        {
            if (three_key == START)
            {
                printf("three start\n"); //three_start(sig);1:快速解冻 2：智能除味 3：微波杀菌 4：光波杀菌
                return 0;
            }
            else if (three_key == CANCLE)
            {
                printf("three cancel\n");
                sig = 0;
                return 0;
            }
        }
    else if (three_key == Intell_three)
    {
        if (sig == 0)
        {
            printf("Quick freezing "); //快速解冻配置
            sig = 1;
        }
        else if (sig == 1)
        {
            printf("Intelligent cancel taste"); //智能除味配置
            sig = 2;
        }
        else if (sig == 2)
        {
            printf("Microwave sterilization"); //微波杀菌配置
            sig = 3;
        }
        else if (sig == 3)
        {
            printf("Light sterilization"); //光波杀菌配置
            sig = 0;
        }
    }
    else
    {
        printf("Invalid key");
    }
    return 0;
}

int main()
{
    int a;
    while (1)
    {
        scanf("%d", &a);
        three_baby(a); 
    }
    return 0;
}