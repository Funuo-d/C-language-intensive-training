/*
本代码只是按照题目意思设计，没有考虑指数是否大于或等于0，结果是否溢出的情况。
*/
#include <stdio.h>
int main()
{
	int x, y;
	printf("请输入两个整数：");
	scanf("%d%d", &x, &y);			//计算指数，没有考虑数据溢出
	for (int i=0;i<y;i++)
	{
		x = x * x;
	}
	int Result = x % 1000;			//取余计算结果
	printf("最后三位数为：%d", Result);
	return 0;
}