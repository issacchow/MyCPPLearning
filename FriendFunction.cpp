#include "FriendFunctionClass.h"
#include <iostream>
using namespace std;

// 实现了一个友元函数 
int getAge(FriendFunctionClass &t){
	// 这里可以访问t 的任何成员,包括 私有成员 
	return t.age;
}

FriendFunctionClass& operator +(FriendFunctionClass &t,FriendFunctionClass &other){
	int accumulate = getAge(t)+getAge(other);
	cout << "accumulate:" << accumulate << endl;
	FriendFunctionClass n(accumulate);
	cout << "n:" << getAge(n) << endl;
	return n;
}
