#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * C����ʵ����ϰ94
 */

void game()
{
	int a;
	srand((unsigned int)time(NULL));
	int num=rand()%100;
	puts("������һ������");
	int c=1;
	while (1)
	{
		scanf("%d", &a);
		if (a==num)
		{
			if (c==1)
			{
				puts("��ϲ��һ�ξͲ¶���");
			}
			c++;
		}
		else
		{
			puts("������˼��û�в¶�");
		}

		if (a=='#')
		{
			break;
		}
	}
}
int main94()
{
	game();
	return 0;
}