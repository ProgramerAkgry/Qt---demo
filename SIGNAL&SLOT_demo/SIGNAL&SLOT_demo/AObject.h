#pragma once

#include <map>
using std::multimap;

class AObject;

struct _des {
	AObject* receiver;
	int slot;
};

class AObject
{
public:

	// 信号槽的连接函数
	friend void connect(AObject* sender, int signal,
		AObject* receiver, int slot);

	// 信号槽的激活函数
	friend void active(AObject* sender, int signal);

	// 子类的调用函数
	virtual void call(int slot) = 0;

private:

	// 用于保存连接的映射，取代了元对象
	multimap<int, _des> connectMap;

};


void connect(AObject* sender, int signal,
	AObject* receiver, int slot);

void active(AObject* sender, int signal);
