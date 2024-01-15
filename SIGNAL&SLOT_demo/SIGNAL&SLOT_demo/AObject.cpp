#include "AObject.h"

void connect(AObject* sender, int signal, AObject* receiver, int slot)
{
	// 构造一个临时的pair对象
	_des des = { receiver, slot };
	std::pair<int, _des> temp(signal, des);

	// 将pair对象插入到映射中
	sender->connectMap.insert(temp);
}

void active(AObject* sender, int signal)
{
	for (auto it = sender->connectMap.find(signal);
		it != sender->connectMap.end() && it->first == signal;
		it++) {

		_des des = it->second;
		des.receiver->call(des.slot);

	}
}
