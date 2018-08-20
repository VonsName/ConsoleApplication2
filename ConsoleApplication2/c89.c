#include <stdio.h>
#include <stdlib.h>
void my_print_array(int *a);


/**
 * CÓïÑÔ89ÊµÀıÁ·Ï°
 */
void trans_()
{
	printf("%s\n", "ÇëÊäÈë4Î»Êı×Ö:");
	int a, arr[4],m;
	scanf("%d", &a);
	
	m = a / 1000;
	a = a % 1000;
	arr[0] = (m+5)%10;

	
	m = a / 100;
	a = a % 100;
	arr[1] = (m + 5) % 10;

	
	m = a / 10;
	a = a % 10;
	arr[2] = (m + 5) % 10;

	arr[3] = (a + 5) % 10;
	for (int i=0;i<4;i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
	int tmp = 0;
	int len = sizeof(arr) / sizeof(*arr);
	int n = len / 2;
	len = len - 1;
	for (int i = 0; i < n; i++)
	{
		tmp = *(arr + len -i);
		*(arr + len -i) = *(arr + i);
		*(arr + i) = tmp;
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main89()
{
	trans_();
	return 0;
}