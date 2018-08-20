#include <stdlib.h>
#include <stdio.h>


/**
 * C”Ô—‘ µ¿˝¡∑œ∞99
 */

void merage_file()
{
	FILE *fp = NULL;
	fp= fopen("C:/Users/Administrator/Desktop/a.txt","r");

	if (fp==NULL)
	{
		perror("open");
		return;
	}

	char buf[12] = {0};
	fread(buf, 1, sizeof(buf), fp);
	printf("%s\n", buf);

	fclose(fp);
	fp = NULL;
	fp = fopen("C:/Users/Administrator/Desktop/b.txt", "r");

	if (fp == NULL)
	{
		perror("open");
		return;
	}

	char buf1[12] = { 0 };
	fread(buf1, 1, sizeof(buf1), fp);
	printf("%s\n", buf1);

	fclose(fp);
	fp = NULL;
	fp = fopen("C:/Users/Administrator/Desktop/c.txt", "w");

	strcat(buf, buf1);

	fwrite(buf, 1, sizeof(buf), fp);
}

int main99()
{
	merage_file();
	return 0;
}