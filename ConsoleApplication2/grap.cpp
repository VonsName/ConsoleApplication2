#include <stdio.h>
#include <graphics.h>
int main1() {
	//��ʼ��ͼ�δ���
	initgraph(640, 480);
	//���ñ�����ɫ
	setbkcolor(BLUE);
	//ʹ�ñ���ɫ�����Ļ
	cleardevice();
	//���û�ͼ��ɫ
	setcolor(RED);
	//��Բ
	circle(50, 60, 50);
	//����
	getchar();
	//�ر�ͼ�δ���
	closegraph();

	int a = 10;
	//int* pa = a;
	return 0;
}