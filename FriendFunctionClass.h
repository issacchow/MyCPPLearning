#ifndef FriendFunctionClass_H
#define FriendFunctionClass_H

class FriendFunctionClass{
	public:
		FriendFunctionClass(int age);
		void setAge(int age);
		
	friend int getAge(FriendFunctionClass &t);
	friend FriendFunctionClass& operator +(FriendFunctionClass &t,FriendFunctionClass &other);
//	friend void* operator new(size_t);
	private:
		int age;
		char* name;
		
};



#endif
