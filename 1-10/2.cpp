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
	printf("每天平均花：%.2f 元\n", money);		//“%.2f”的意思是保留小数点后面两位，结果四舍五入
	return 0;
}