#pragma once
#include "AObject.h"
#include <string>
#include <iostream>

using std::string;

class JoyStick : public AObject
{
public:

	// ҡ���ܹ������Ĳ���
	enum{
		��,
		����,
		��,
		����,
		��,
		����,
		��,
		����,
		ALL
	};

	// ���캯��
	JoyStick(string str) : name(str) {};

	// ģ�ⷢ���źŵķ���
	void emit(int signal);

	// ʵ�ּ̳й������麯��call
	void call(int slot);
	
private:
	string name = "ҡ��";
};