#include<Windows.h>
#include<Winuser.h>
#include<iostream>
#pragma comment(lib,"User32.lib")

using namespace std;
/**************************
1500 140 发布按键位置
1300 200 发话题按键位置
xxxx 250 标题输入框
xxxx 400 文章内容输入框
400  850 发布范围选择位置
1500 950 发布按键位置
85   55  浏览器返回上一页面
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
		//首先直接鼠标位置设置为(100,100)
		Oneclick(1000, 250);
		InputInfo();

		Oneclick(1000, 400);
		InputInfo();

		Oneclick(400, 850);

		Oneclick(1500, 950);
		Sleep(2000);

		Oneclick(85, 55);

		//注意鼠标两次点击之间应当有一个时间间隔，否则可能不会出发双击的
		Sleep(100);
		times--;
	}

	//system("pause");
	return 0;
}

/*
//位置测试
int main() {
	SetCursorPos(400,850);

	return 0;
}*/