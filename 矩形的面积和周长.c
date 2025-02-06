#include <stdio.h>

int main(void)
{
    double a, b; // 定义两个双精度浮点数变量用于存储矩形的长和宽
    double perimeter, area; // 定义两个双精度浮点数变量用于存储矩形的周长和面积

    // 读取用户输入的矩形的长和宽
    scanf("%lf %lf", &a, &b);

    // 计算矩形的周长和面积
    perimeter = 2 * (a + b); // 周长公式：2 * (长 + 宽)
    area = a * b; // 面积公式：长 * 宽

    // 输出矩形的周长，结果保留两位小数
    printf("%.2lf\n", perimeter);

    // 输出矩形的面积，结果保留两位小数
    printf("%.2lf\n", area);

    return 0;
}