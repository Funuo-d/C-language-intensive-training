/*
������ֻ�ǰ�����Ŀ��˼��ƣ�û�п���ָ���Ƿ���ڻ����0������Ƿ�����������
*/
#include <stdio.h>
int main()
{
	int x, y;
	printf("����������������");
	scanf("%d%d", &x, &y);			//����ָ����û�п����������
	for (int i=0;i<y;i++)
	{
		x = x * x;
	}
	int Result = x % 1000;			//ȡ�������
	printf("�����λ��Ϊ��%d", Result);
	return 0;
}