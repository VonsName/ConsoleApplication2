#include <stdio.h>

int main88()
{
	printf("%s\n", "������һ��С��50����:");
	int a = 0;
	

	for (int i=0;i<7;i++)
	{
		scanf("%d", &a);
		if (a>50)
		{
			printf("%s\n", "�������ִ���");
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