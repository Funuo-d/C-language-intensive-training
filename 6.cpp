#include <stdio.h>
int number(int month, int day) //计算2011年第几天的函数
{
    int num = 0;
    switch (month)
    {
    case 12:
        num = num + 30;
    case 11:
        num = num + 31;
    case 10:
        num = num + 30;
    case 9:
        num = num + 31;
    case 8:
        num = num + 31;
    case 7:
        num = num + 30;
    case 6:
        num = num + 31;
    case 5:
        num = num + 30;
    case 4:
        num = num + 31;
    case 3:
        num = num + 28;
    case 2:
        num = num + 31;
    case 1:
        num = num + 0;
        break;
    default:
        return -1;
    }
    num = num + day;
    return num;
}

int main()
{
    int month, day, num;
    printf("请分别输入月和日：");
    scanf("%d%d", &month, &day);
    num = number(month, day);
    num = num % 5;
    if (num < 3)
    {
        printf("渔夫在%d月%d日打鱼。", month, day);
    }
    else
    {
        printf("渔夫在%d月%d日晒网。", month, day);
    }

    return 0;
}