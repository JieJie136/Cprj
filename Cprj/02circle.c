#include<stdio.h>
#define PI 3.14159 //宏定义，这里写了可以用，下面就可以不用定义pi了。宏定义是第二种方法。宏定义后面不能写分号，不然会报错
int main()
{
    const float pi = 3.14;
    float r = 3.4;
    float s = pi * r * r;
    float l = 2 * pi * r;              //默认保留6位小数，可以通过%.2f指定位数，这样就是指定保留小数点后面2位，会四舍五入
    printf("圆的面积是%.2f\n", s);       //上下移动一行代码 alt+上下
    printf("圆的周长是%.2f\n", l);       //快速复制，shift+alt+下，往下复制
    return 0;
}

//常量一共两种定义方式，const和宏定义。
//定义局部变量时候，可以在数据类型前加修饰auto，一般不要加麻烦