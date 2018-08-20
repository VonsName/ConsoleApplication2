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
		printf("请输入第%d个学生信息：\n",i+1);
		printf("%s", "学号：");
		scanf("%d", &stu[i].no);


		char name[50];
		printf("%s", "姓名：");
		scanf("%s", name);
		stu[i].name = (char *)malloc(strlen(name)+1);
		strcpy(stu[i].name, name);
		stu[i].nameLen = strlen(name);


		printf("%s", "数学成绩：");
		scanf("%d", &stu[i].math);
		printf("%s", "C成绩：");
		scanf("%d", &stu[i].c);
		printf("%s", "英语成绩：");
		scanf("%d", &stu[i].english);

		int sScore = stu[i].c + stu[i].english + stu[i].math;
		stu[i].avg = sScore / 3;
	}


	for (int i = 0; i < len; i++)
	{
		printf("学号:%d  姓名:%s C:%d 数学:%d 英语:%d 平均分:%d\n", 
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
		//解决乱码
		memset(stu[i].name, 0, stu[i].nameLen+1);
		fread(stu[i].name, stu[i].nameLen, 1, fp);
	}

	for (int i=0;i<n;i++)
	{
		printf("学号:%d  姓名:%s C:%d 数学:%d 英语:%d 平均分:%d\n",
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