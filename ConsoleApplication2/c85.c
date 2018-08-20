#include <stdio.h>

/**
 * C语言实例练习85
 */
int main85()
{
	printf("请输入一个素数：\n");
	int a = 0;
	scanf("%d", &a);
	int sum = 9;
	while (1)
	{
		if (sum % a == 0) {
			break;
		}
		else {
			sum = sum * 10 + 9;
		}
	}

	printf("能整除素数%d的9组成的数为%ld", a, sum);
}