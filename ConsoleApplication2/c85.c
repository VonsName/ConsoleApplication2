#include <stdio.h>

/**
 * C����ʵ����ϰ85
 */
int main85()
{
	printf("������һ��������\n");
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

	printf("����������%d��9��ɵ���Ϊ%ld", a, sum);
}