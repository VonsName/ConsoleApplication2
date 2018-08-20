#include <stdio.h>
#include <stdlib.h>

/**
 * C语言练习97
 */
void record_to() {
	printf("%s\n", "输入要保存的文件信息：");
	FILE *fp = NULL;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\re.txt", "w");
	if (fp==NULL)
	{
		perror("open");
		return;
	}
	/*while (1)
	{
		int ch=getc(stdin);
		printf("%c\n", ch);
		fputc(ch, fp);
		if (ch =='#')
		{
			break;
		}
	}*/
	getchar();
	char ch=0;
	while (1)
	{
		if ((ch=getchar())=='#')
		{
			break;
		}
		fputc(ch, fp);
	}
	fclose(fp);
}

int main97()
{
	record_to();
	return 0;
}