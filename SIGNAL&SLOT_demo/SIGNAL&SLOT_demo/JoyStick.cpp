#include "JoyStick.h"

void JoyStick::emit(int signal)
{
	string str;
	switch (signal) {
	case ��:
		str = "����";
		break;
	case ����:
		str = "������";
		break;
	case ��:
		str = "����";
		break;
	case ����:
		str = "������";
		break;
	case ��:
		str = "����";
		break;
	case ����:
		str = "������";
		break;
	case ��:
		str = "����";
		break;
	case ����:
		str = "������";
		break;
	}

	std::cout << name << str << "������, ";

	active(this, signal);
}

void JoyStick::call(int slot)
{
}
