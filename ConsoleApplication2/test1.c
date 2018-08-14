#include <stdio.h>

int xx=20;
static int aa = 9;
void foo()
{
	//printf("%d\n", xx);
	printf("%d\n", aa);
}
int main03()
{
	foo();
	return 0;
}

