#pragma once
#include "AObject.h"
#include <string>
#include <iostream>

using std::string;

class Fighter : public AObject
{
public:

	// ������������ָ��
	enum {
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
	Fighter(string str) : name(str) {};

	// ģ�ⷢ���źŵķ���
	void emit(int signal);

	// ʵ�ּ̳й������麯��call
	void call(int slot);

private:
	string name = "����";

};

