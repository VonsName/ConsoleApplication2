#include <stdio.h>
#include <graphics.h>
int main1() {
	//初始化图形窗口
	initgraph(640, 480);
	//设置背景颜色
	setbkcolor(BLUE);
	//使用背景色清空屏幕
	cleardevice();
	//设置绘图颜色
	setcolor(RED);
	//画圆
	circle(50, 60, 50);
	//阻塞
	getchar();
	//关闭图形窗口
	closegraph();

	int a = 10;
	//int* pa = a;
	return 0;
}