#include <stdio.h>

void Collator(int *a, int *b, int *c) //把最大的一条边放在第三个位置
{
    int box = 0;
    if (*a > *b)
    {
        box = *a;
        *a = *b;
        *b = box;
    }
    if (*b > *c)
    {
        box = *b;
        *b = *c;
        *c = box;
    }
}

bool TriangleRule(int a, int b, int c) //判断输入的三边是否能构成三角形
{
    if (a + b > c)
    {
        return true;
    }
    return false;
}

void TriangleType(int a, int b, int c) //判断三角形的类型
{
    if ((a * a + b * b) < (c * c))
    {
        printf("该三角形为锐角三角形。");
    }
    else if ((a * a + b * b) == (c * c))
    {
        printf("该三角形为直角三角形。");
    }
    else
    {
        printf("该三角形为钝角三角形。");
    }
}

int main()
{
    int a, b, c;
    printf("请分别输入三角形的三个边长：");
    scanf("%d%d%d", &a, &b, &c);
    Collator(&a, &b, &c);
    if (!(TriangleRule(a, b, c)))
    {
        printf("输入的三边无法构成三角形！");
        return -1;
    }
    TriangleType(a, b, c);
    return 0;
}