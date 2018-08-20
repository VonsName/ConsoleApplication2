#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
	int no;
	int math;
	int c;
	int english;
	int avg;
	char *name;
	int nameLen;
}Student;


void record()
{

	
	Student stu[4];
	int len = sizeof(stu) / sizeof(*stu);
	for (int i =0;i<len;i++)
	{
		printf("�������%d��ѧ����Ϣ��\n",i+1);
		printf("%s", "ѧ�ţ�");
		scanf("%d", &stu[i].no);


		char name[50];
		printf("%s", "������");
		scanf("%s", name);
		stu[i].name = (char *)malloc(strlen(name)+1);
		strcpy(stu[i].name, name);
		stu[i].nameLen = strlen(name);


		printf("%s", "��ѧ�ɼ���");
		scanf("%d", &stu[i].math);
		printf("%s", "C�ɼ���");
		scanf("%d", &stu[i].c);
		printf("%s", "Ӣ��ɼ���");
		scanf("%d", &stu[i].english);

		int sScore = stu[i].c + stu[i].english + stu[i].math;
		stu[i].avg = sScore / 3;
	}


	for (int i = 0; i < len; i++)
	{
		printf("ѧ��:%d  ����:%s C:%d ��ѧ:%d Ӣ��:%d ƽ����:%d\n", 
			stu[i].no, stu[i].name, stu[i].c, stu[i].math, stu[i].english, stu[i].avg);
	}

	

	FILE *fp = NULL;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\stu.txt", "w");
	if (fp == NULL)
	{
		perror("fp open");
		return;
	}
	for (int i=0;i<len;i++)
	{
		fwrite((stu + i), 1, sizeof(stu[i]), fp);
		fwrite(stu[i].name, stu[i].nameLen, 1, fp);
	}
	fclose(fp);
}


void read_file()
{
	Student stu[4];
	FILE *fp = NULL;
	fp=	fopen("C:\\Users\\Administrator\\Desktop\\stu.txt", "r");
	if (fp==NULL)
	{
		perror("open");
		return;
	}
	
	int n = sizeof(stu) / sizeof(*stu);
	for (int i=0;i<n;i++)
	{
		fread(&stu[i], 1, sizeof(stu[i]), fp);
		stu[i].name = (char *)malloc(stu[i].nameLen + 1);
		//�������
		memset(stu[i].name, 0, stu[i].nameLen+1);
		fread(stu[i].name, stu[i].nameLen, 1, fp);
	}

	for (int i=0;i<n;i++)
	{
		printf("ѧ��:%d  ����:%s C:%d ��ѧ:%d Ӣ��:%d ƽ����:%d\n",
			stu[i].no, stu[i].name, stu[i].c, stu[i].math, stu[i].english, stu[i].avg);
	}
	fclose(fp);
}
int main()
{
	//record();

	read_file();
	return 0;
}