#include "FriendFunctionClass.h"
#include <iostream>
using namespace std;

// ʵ����һ����Ԫ���� 
int getAge(FriendFunctionClass &t){
	// ������Է���t ���κγ�Ա,���� ˽�г�Ա 
	return t.age;
}

FriendFunctionClass& operator +(FriendFunctionClass &t,FriendFunctionClass &other){
	int accumulate = getAge(t)+getAge(other);
	cout << "accumulate:" << accumulate << endl;
	FriendFunctionClass n(accumulate);
	cout << "n:" << getAge(n) << endl;
	return n;
}
