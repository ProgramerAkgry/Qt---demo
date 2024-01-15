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

	// �źŲ۵����Ӻ���
	friend void connect(AObject* sender, int signal,
		AObject* receiver, int slot);

	// �źŲ۵ļ����
	friend void active(AObject* sender, int signal);

	// ����ĵ��ú���
	virtual void call(int slot) = 0;

private:

	// ���ڱ������ӵ�ӳ�䣬ȡ����Ԫ����
	multimap<int, _des> connectMap;

};


void connect(AObject* sender, int signal,
	AObject* receiver, int slot);

void active(AObject* sender, int signal);
