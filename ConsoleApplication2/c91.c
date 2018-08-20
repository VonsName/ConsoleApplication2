#include <stdio.h>
#define LEN 5
void my_print_array(int *a);
void sort(int *a)
{

	int i, j, m;
	i = 0, j = LEN - 1;
	while (i < j)
	{
		m = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = m;
		i++, j--;
	}
	my_print_array(a);
}

void my_print_array(int *a)
{
	for (int j = 0; j < LEN; j++)
	{
		printf("%d", *(a + j));
	}
	printf("\n");
}
int main91()
{
	int a[LEN] = { 1,2,3,4,5 };
	my_print_array(a);
	sort(a);
	return 0;
}