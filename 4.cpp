/*
������û���жϡ��ա���û��������ȷ����������Ķ��壬�ܱ�100�ұ�400��������ݣ��Լ���4���������Ϊ����
*/
#include <stdio.h>
bool leap(int year)				//�ж��Ƿ�Ϊ����ĺ�������������Ϊ�������ͣ�falseΪ0��tureΪ1
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
int number(int year, int month,int day)		//����ڼ���ĺ���
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
	printf("��ֱ������ꡢ�¡��գ�");
	scanf_s("%d%d%d", &year, &month, &day);
	printf("������ȫ��ĵ� %d �졣\n", number(year, month, day));
	return 0;
}