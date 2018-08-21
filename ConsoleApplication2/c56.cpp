#include <graphics.h>
#include <stdio.h>

int main()
{
	//初始化画板
	initgraph(600, 480);

	//设置背景颜色
	setbkcolor(YELLOW);

	//清楚屏幕内容，使用当前背景色清空屏幕，并将当前点移动到（0,0）
	cleardevice();

	//画圆
	circle(200, 300, 35);
	//使用背景颜色清空圆形区域
	//clearcircle(200, 300, 35);

	getchar();
	closegraph();
	return 0;
}