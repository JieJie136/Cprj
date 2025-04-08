#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *my_strstr(char *src, char *dest)
{
    char *fsrc = src; // 用于循环遍历的指针
    char *rsrc = src; // 记录每次相同的首地址

    char *tdest = dest;
    while (*fsrc) // 外层先判断是否为\0，如果不是\0，然后进入内层和我们要查找的字符串进行比对
    {
        rsrc = fsrc;
        while (*fsrc == *tdest && *fsrc != '\0') // （进入内层和我们要查找的字符串进行比对），每次如果有字符相等，就在大字符串记录位置
        {
            fsrc++;
            tdest++;
        }
        if (*tdest == '\0') // 这里就是设定的目标数组查找完毕，前3个字符都能完美找到，就判断最后是否到\0
        {
            return rsrc;
        }
        // 回滚
        fsrc = rsrc;
        tdest = dest; // 目标字符串更新到其实位置
        fsrc++;
    }
    return NULL; // 如果都没找到就返回一个空
}
int main()
{
    char src[] = "llllhelle worldllo"; // 待查找的字符串
    char dest[] = "lle";               // 我们要设定的目标字符串

    char *p = my_strstr(src, dest);
    printf("%s\n", p);
    return EXIT_SUCCESS;
}

// 这个代码要多理解