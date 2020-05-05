#include "MyClass.h"
#include <iostream>
#include <winsock.h>

using namespace std;


int m_age;

MyClass::MyClass(int age)
{
	m_age = age;
	cout << "MyClass constructor invoked" << endl;
	cout << "my age:" << age << endl;
}

MyClass::~MyClass()
{
	cout << "destroy" << endl;
}

void MyClass::hello(){
	cout << "hello" << endl;
}

void* MyClass::readFile(char* filePath){
	cout << "ready to change filePath:" << filePath << "address:" << &filePath << endl;
	filePath = "change";
	
	cout << "after changed: " << filePath << "address:" << &filePath <<endl;
	return NULL;
}

int MyClass::max(int a,int b){
	return a>b? a:b;
}

int MyClass::static_max(int a,int b){
	return a>b? a:b;
}

MyClass& MyClass::operator +(MyClass &other){
  MyClass c = MyClass(other.getAge());
  return c;
}

//bool MyClass::operator ==(MyClass &other){
//	cout << "operator == overloaded , address:" << this << endl;
//
//	if(this==other){
//		cout << "the same address" << endl;
//		return true;
//	}
//	
//	if( this->getAge()==other.getAge() ){
//		return true;
//	}
//	
//    return false;
//}



int MyClass::getAge(){
	return m_age;
}

void* MyClass::operator new(size_t size){
	cout << "new operation overloaded,size:" << size << endl;
	return malloc(size);
	
}

void MyClass::operator delete(void* pHead){
	cout << "delete operation overloaded,address:" << pHead << endl;
	free(pHead);
}



