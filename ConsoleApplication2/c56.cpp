#include <graphics.h>
#include <stdio.h>

int main()
{
	//��ʼ������
	initgraph(600, 480);

	//���ñ�����ɫ
	setbkcolor(YELLOW);

	//�����Ļ���ݣ�ʹ�õ�ǰ����ɫ�����Ļ��������ǰ���ƶ�����0,0��
	cleardevice();

	//��Բ
	circle(200, 300, 35);
	//ʹ�ñ�����ɫ���Բ������
	//clearcircle(200, 300, 35);

	getchar();
	closegraph();
	return 0;
}