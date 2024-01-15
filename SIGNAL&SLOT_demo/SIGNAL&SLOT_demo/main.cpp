#include <iostream>
#include "Fighter.h"
#include "JoyStick.h"

using namespace std;

int main(void) {

	Fighter man1("八神庵");
	Fighter man2("草薙京");

	JoyStick rocker1("玩家一的摇杆");
	JoyStick rocker2("玩家二的摇杆");

	connect(&rocker1, JoyStick::右, &man1, Fighter::右);
	connect(&rocker1, JoyStick::上, &man1, Fighter::上);
	connect(&rocker2, JoyStick::右上, &man2, Fighter::左上);

	rocker1.emit(JoyStick::右);
	rocker1.emit(JoyStick::上);
	rocker2.emit(Fighter::右上);

	system("pause");

	return 0;
}