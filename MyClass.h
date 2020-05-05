#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
using namespace std;

class MyClass
{
	public:
		MyClass(int age);
		~MyClass();
		
		int getAge();
		 
		
		void hello();
		void* readFile(char * filePath);
		int max(int a,int b);
		
		
		
		
		static int static_max(int a,int b);
		
		/****** ‘ÀÀ„∑˚÷ÿ‘ÿ ******/
		MyClass& operator +(MyClass &other);
//		bool operator ==(MyClass &other);
		static void * operator new(size_t size);
		static void operator delete(void* pHead);
		
		
	protected:
};

#endif
