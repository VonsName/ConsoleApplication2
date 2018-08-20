#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * C语言93实例练习
 */

int main93()
{
	clock_t start, end;
	long  a = 100000000L;
	start = clock();
	for (int i = 0; i < a; i++)
	{

	}
	end = clock();

	double times =(double) (end - start) / CLOCKS_PER_SEC;
	printf("循环%ld次需要%f秒\n", a, times);

	time_t begin, finish;
	begin = time(NULL);

	for (int i = 0; i < a; i++)
	{

	}
	finish = time(NULL);
	printf("时间间隔为%f\n", difftime(finish, begin));

	struct tm * timeinfo;
	time_t rawtime;
	time(&rawtime);

	timeinfo = localtime(&rawtime);
	printf("当前本地时间为: %s", asctime(timeinfo));
	return 0;
}