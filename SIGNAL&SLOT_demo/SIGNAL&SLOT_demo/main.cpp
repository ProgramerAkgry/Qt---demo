#include <iostream>
#include "Fighter.h"
#include "JoyStick.h"

using namespace std;

int main(void) {

	Fighter man1("������");
	Fighter man2("���S��");

	JoyStick rocker1("���һ��ҡ��");
	JoyStick rocker2("��Ҷ���ҡ��");

	connect(&rocker1, JoyStick::��, &man1, Fighter::��);
	connect(&rocker1, JoyStick::��, &man1, Fighter::��);
	connect(&rocker2, JoyStick::����, &man2, Fighter::����);

	rocker1.emit(JoyStick::��);
	rocker1.emit(JoyStick::��);
	rocker2.emit(Fighter::����);

	system("pause");

	return 0;
}