#include "Fighter.h"

void Fighter::emit(int signal)
{
	active(this, signal);
}

void Fighter::call(int slot)
{
	string str;
	switch (slot) {
	case 左:
		str = "后撤步";
		break;
	case 左上:
		str = "后空翻";
		break;
	case 上: 
		str = "升龙跳";
		break;
	case 右上:
		str = "飞身跳";
		break;
	case 右:
		str = "前冲步";
		break;
	case 右下:
		str = "下前突";
		break;
	case 下:
		str = "下防蹲";
		break;
	case 左下:
		str = "下防退";
		break;
	}

	std::cout << name << "做出了" << str << std::endl;

}
