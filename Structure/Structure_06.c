#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Attractions {
    char name[100];  // 景点名称
    int Votes;       // 票数
} Att;

int main() 
{
    srand(time(NULL));  // 初始化随机数生成器

    // 初始化四个景点
    Att A = { "老君山", 0 };
    Att B = { "巴厘岛", 0 };
    Att C = { "南沙", 0 };
    Att D = { "大理", 0 };

    // 将景点放入数组
    Att attArr[4] = { A, B, C, D };

    // 进行80次投票
    for (int i = 0; i < 80; i++) {
        int choose = rand() % 4;  // 随机选择一个景点
        attArr[choose].Votes++;   // 增加该景点的票数
    }

    // 输出每个景点的票数
    for (int i = 0; i < 4; i++)
    {
        printf("%s的票数是%d\n", attArr[i].name, attArr[i].Votes);
    }

    int maxNumber = attArr[0].Votes;

    //找出票数最多的景点（相同情况下顺序是A>B>c>D）
    for (int i = 1; i < 4; i++)
    {
        if (maxNumber < attArr[i].Votes)
            maxNumber = attArr[i].Votes;
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (maxNumber == attArr[i].Votes)
            printf("%s的票数最多，有%d张票\n", attArr[i].name, attArr[i].Votes);
        break;
    }
    
    return 0;
}