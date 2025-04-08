#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // 黄瓜 3元 /斤  购买5斤
    // 常量 在程序运行过程中 其值不能发生改变的量也就是不能再赋值 成为常量。定义常量有2种方法，const和宏定义 #define
    const int price = 3; // 常量  只读变量
    // price = 5;//err
    // 变量：在程序运行过程中 其值可以发生改变的量可以再赋值 成为变量
    // int weight = 5;

    int weight;
    printf("请输入购买斤数：");
    scanf("%d", &weight);
    int sum = price * weight;
    printf("%d\n", sum);
    return 0;
}
// 这是一个提交说明，如果有就是成功了