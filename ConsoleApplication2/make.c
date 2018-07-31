#include <stdio.h>
#include <stdlib.h>
void test();
int main1() {

	float a, b, c, d;
	printf("请输入4个数字\r\n");
	scanf("%f,%f ,%f,%f", &a, &b, &c, &d);
	printf("%f,%f,%f,%f\r\n", a, b, c, d);
	float x = a / b, y = c / d;
	if (x>y)
	{
		printf("%d/%d > %d/%d\r\n", (int)a, (int)b, (int)c, (int)d);
	}
	else if(x<y){
		printf("%d/%d < %d/%d\r\n", (int)a, (int)b, (int)c, (int)d);
	}
	else {
		printf("%d/%d = %d/%d\r\n", (int)a, (int)b, (int)c, (int)d);
	}
	test();
	return 0;
}
void test() {
	char *str = "测试啊";
	puts(str);//会自动在末尾加上\n换行符
	//fputs(str, stdout);
	printf("%d\r\n", strlen(str));
	printf("%s", "你好\r\n");
	char buf[50];
	sprintf(buf, "我有%d块钱\r\n", 100);
	printf("buf=%s\r\n", buf);
	printf("数字:%d", 10);
}