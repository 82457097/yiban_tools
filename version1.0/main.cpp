#include<Windows.h>
#include<Winuser.h>
#include<iostream>
#pragma comment(lib,"User32.lib")

using namespace std;
/**************************
1500 140 ��������λ��
1300 200 �����ⰴ��λ��
xxxx 250 ���������
xxxx 400 �������������
400  850 ������Χѡ��λ��
1500 950 ��������λ��
85   55  �����������һҳ��
***************************/

void Oneclick(int x,int y) {
	SetCursorPos(x, y);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(100);
}

void InputInfo() {
	keybd_event(0x56, 0, 0, 0);
	Sleep(100);

	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
	Sleep(100);
}

int main() {
	int times = 10;
	while (times) {
		//����ֱ�����λ������Ϊ(100,100)
		Oneclick(1000, 250);
		InputInfo();

		Oneclick(1000, 400);
		InputInfo();

		Oneclick(400, 850);

		Oneclick(1500, 950);
		Sleep(2000);

		Oneclick(85, 55);

		//ע��������ε��֮��Ӧ����һ��ʱ������������ܲ������˫����
		Sleep(100);
		times--;
	}

	//system("pause");
	return 0;
}

/*
//λ�ò���
int main() {
	SetCursorPos(400,850);

	return 0;
}*/