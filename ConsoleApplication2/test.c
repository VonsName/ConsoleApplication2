#include  <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	char name[] = "appale\n";
	printf(name);
	char *al = "nininin\n";
	printf(al);
	char *p = name;
	printf("%p\n",p);

	int a = 10;
	int* pa = &a;
	printf("%p\n", pa);
	getchar();
	return 0;
}
