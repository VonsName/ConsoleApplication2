#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * C����93ʵ����ϰ
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
	printf("ѭ��%ld����Ҫ%f��\n", a, times);

	time_t begin, finish;
	begin = time(NULL);

	for (int i = 0; i < a; i++)
	{

	}
	finish = time(NULL);
	printf("ʱ����Ϊ%f\n", difftime(finish, begin));

	struct tm * timeinfo;
	time_t rawtime;
	time(&rawtime);

	timeinfo = localtime(&rawtime);
	printf("��ǰ����ʱ��Ϊ: %s", asctime(timeinfo));
	return 0;
}