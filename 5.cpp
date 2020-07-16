/*
使用for循环，遍历所有的情况
*/
#include <stdio.h>
int main()
{
	for (int x=0;x<3;x++)
	{
		for (int y=0;y<3;y++)
		{
			for (int z=0;z<3;z++)
			{
				if (x!=0&&z!=0&&z!=2&&x!=y&&y!=z&&z!=x)			
				{
					printf("%c 将嫁给 a，%c 将嫁给 b，%c 将嫁给 c\n", 'x' + x, 'x' + y, 'x' + z);
				}
			}
		}
	}
	return 0;
}