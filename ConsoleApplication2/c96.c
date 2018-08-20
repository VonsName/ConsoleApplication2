#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//C:\\Users\\Administrator\\Desktop\\

/**
 * CÓïÑÔÊµÀıÁ·Ï°96
 */
void counts() {
	printf("ÇëÊäÈëÁ½¸ö×Ö·û´®\n");
	char a[25], b[25];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	gets_s(a, sizeof(a));
	gets_s(b, sizeof(b));
	int len1 = strlen(a), len2 = strlen(b);
	int cou=0;
	for (int i=0;i<len1;i++)
	{
		for (int j=0;j<len2;j++)
		{
			if (a[i] == b[j]) {
				cou++;
			}
		}
	}
	printf("%d\n", cou);
}

int main96()
{
	counts();
	return 0;
}