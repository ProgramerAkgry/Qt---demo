#include "Fighter.h"

void Fighter::emit(int signal)
{
	active(this, signal);
}

void Fighter::call(int slot)
{
	string str;
	switch (slot) {
	case ��:
		str = "�󳷲�";
		break;
	case ����:
		str = "��շ�";
		break;
	case ��: 
		str = "������";
		break;
	case ����:
		str = "������";
		break;
	case ��:
		str = "ǰ�岽";
		break;
	case ����:
		str = "��ǰͻ";
		break;
	case ��:
		str = "�·���";
		break;
	case ����:
		str = "�·���";
		break;
	}

	std::cout << name << "������" << str << std::endl;

}
