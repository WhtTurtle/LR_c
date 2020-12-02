#include <stdio.h>
#define cancel 0
#define start 1
#define autoheat 2
#define rice 3
#define milk 4
#define bread 5
#define fish 6
#define dumpling 7
#define roast 8
#define chick 9
#define healthbaby 10

int auto_menu(unsigned int menu_key)
{
    static int sig = 0;
    if (menu_key == start || menu_key == cancel)
        if (sig == 0)
            printf("Invalid key\n");
        else
        {
            if (menu_key == start)
            {
                printf("menu start\n");
                return 0;
            }
            else if (menu_key == cancel)
            {
                printf("menu cancel\n");
                sig = 0;
                return 0;
            }
        }
    else
    {
        switch (menu_key)
        {
        case autoheat:
            printf("start Automatic heat up \n"); //配置自动翻热
            sig = 1;
            break;
        case rice:
            printf("start make rice \n"); //配置煮米饭
            sig = 1;
            break;
        case milk:
            printf("start milk \n"); //配置牛奶咖啡
            sig = 1;
            break;
        case bread:
            printf("start bread \n"); //开始面包馒头
            sig = 1;
            break;
        case fish:
            printf("start make fish \n"); //开始清蒸咸鱼
            sig = 1;
            break;
        case dumpling:
            printf("start make dumpling \n"); //开始速冻饺子
            sig = 1;
            break;
        case roast:
            printf("start make meet \n"); //开始烤肉
            sig = 1;
            break;
        case chick:
            printf("start make chick \n"); //开始烤鸡翅
            sig = 1;
            break;
        case healthbaby:
            printf("start healthy baby \n"); //开始健康宝宝
            sig = 1;
            break;
        default:
            printf("Invalid key\n");
        }
    }
    return 0;
}

int main()
{
    int a;
    scanf("%d", &a);
    auto_menu(a);
}