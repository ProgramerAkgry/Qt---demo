#pragma once
#include "AObject.h"
#include <string>
#include <iostream>

using std::string;

class JoyStick : public AObject
{
public:

	// 摇杆能够发出的操作
	enum{
		左,
		左上,
		上,
		右上,
		右,
		右下,
		下,
		左下,
		ALL
	};

	// 构造函数
	JoyStick(string str) : name(str) {};

	// 模拟发送信号的方法
	void emit(int signal);

	// 实现继承过来的虚函数call
	void call(int slot);
	
private:
	string name = "摇杆";
};