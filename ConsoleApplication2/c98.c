#include <stdio.h>


/**
 * C98��ϰ��Ӣ����ĸСдת��С
 */
void uper_case()
{
	printf("%s\n", "������һ��Ӣ�ĵ��ʣ�");
	char buf[100];
	memset(buf, 0, sizeof(buf));
	scanf("%s", buf);
	printf("%s\n", buf);
	int len = strlen(buf);
	for (int i=0;i<len;i++)
	{
		if (buf[i]<='z'||buf[i]>'a')
		{
			buf[i] -= 32;
		}
	}
	printf("%s\n", buf);
	FILE *fp = NULL;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\uper.txt", "w");

	if (fp==NULL)
	{
		perror("open");
		return;
	}
	fwrite(buf, 1, sizeof(buf), fp);
}

int main98()
{
	uper_case();

	return 0;
}