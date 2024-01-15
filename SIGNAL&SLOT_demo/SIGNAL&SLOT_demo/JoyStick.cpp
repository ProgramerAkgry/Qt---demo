#include "JoyStick.h"

void JoyStick::emit(int signal)
{
	string str;
	switch (signal) {
	case 左:
		str = "向左";
		break;
	case 左上:
		str = "向左上";
		break;
	case 上:
		str = "向上";
		break;
	case 右上:
		str = "向右上";
		break;
	case 右:
		str = "向右";
		break;
	case 右下:
		str = "向右下";
		break;
	case 下:
		str = "向下";
		break;
	case 左下:
		str = "向左下";
		break;
	}

	std::cout << name << str << "方滑动, ";

	active(this, signal);
}

void JoyStick::call(int slot)
{
}
