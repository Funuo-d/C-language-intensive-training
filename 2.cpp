#include <stdio.h>
int main()
{
	int apple = 2,sum = 0,day = 0;
	while (apple <= 100)
	{
		sum += apple;
		apple = apple * 2;
		day++;
	}
	float money = sum * 0.8 / day;
	printf("ÿ��ƽ������%.2f Ԫ\n", money);		//��%.2f������˼�Ǳ���С���������λ������������롣
	return 0;
}