#include <stdio.h>

int main88()
{
	printf("%s\n", "请输入一个小于50的数:");
	int a = 0;
	

	for (int i=0;i<7;i++)
	{
		scanf("%d", &a);
		if (a>50)
		{
			printf("%s\n", "输入数字错误");
			i--;
		}
		else
		{
			for (int i=0;i<a;i++)
			{
				printf("* ");
			}
		}
	}
	return 0;
}