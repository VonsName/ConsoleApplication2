#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * C语言实例练习94
 */

void game()
{
	int a;
	srand((unsigned int)time(NULL));
	int num=rand()%100;
	puts("请输入一个数字");
	int c=1;
	while (1)
	{
		scanf("%d", &a);
		if (a==num)
		{
			if (c==1)
			{
				puts("恭喜你一次就猜对了");
			}
			c++;
		}
		else
		{
			puts("不好意思，没有猜对");
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