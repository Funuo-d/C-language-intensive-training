/*
本代码没有判断“日”有没有输入正确，对于闰年的定义，能被100且被400整除的年份，以及被4整除的年份为闰年
*/
#include <stdio.h>
bool leap(int year)				//判断是否为闰年的函数，函数类型为布尔类型，false为0，ture为1
{
	if (year % 400 == 0)
	{
		return true;
	}
	else if((year%100>0)&&(year%4==0))
	{
		return true;
	}
	return false;
}
int number(int year, int month,int day)		//计算第几天的函数
{
	int num=0;
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
		num = num + 0; break;
	default:
		return -1;
	}
	if (leap(year)&&month>2)
	{
		num = num + day + 1;
	} 
	else
	{
		num = num + day;
	}
	return num;
}
int main()
{
	int year, month, day;
	printf("请分别输入年、月、日：");
	scanf("%d%d%d", &year, &month, &day);
	printf("该日是全年的第 %d 天。\n", number(year, month, day));
	return 0;
}