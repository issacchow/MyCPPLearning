#include <iostream>
#include "MyClass.h"
#include "ClassInclude.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct Date
{
  int year;
  int month;
  int day;
};

struct Employee
{
  char name[20];
  long  code;
  Date birth;
};

Employee emp;

MyClass destroyTest(){
	MyClass c(10);
	return c;
}


typedef int (*MyDelegate)(int min,int max);
int static_max(int a,int b){
	return a>b? a:b;
}

/** B�����A ���ʵ�������� **/ 
void includeTest(){
	B b;
}

int main2(int argc, char** argv) {
	
// MyClass c = destroyTest();
// c.hello();
// return 0; // hello���ȱ����ã�Ȼ���ٵ��������� 
 
 


//   struct Fuck{
//	 	int target;
//	 	int way;
//	 	int other;
//   } f;
//   
//   int len = 10;
//   Fuck arr[len];
//   
//   
//   Fuck *pArr = arr;
//   for(int i=0;i<len;i++,pArr++){
//   	 pArr->target = i;
//   	 pArr->way = i+1;
//   	 pArr->other = i+2;
//   	 cout << "index:" << i << ", target:" << pArr->target << endl;
//   }
//   
//   //�ָ�ָ��
//   pArr-=len;
//   cout << "target of first fuck" << pArr->target << endl;
//   return 0;

//
// 
//  MyDelegate fn = MyClass::static_max;
//  int result = fn(1,2);
//  cout << "result:" << result << endl;
// 
//  return 0;


    
//  Ƕ���������͵ĳ�ʼ��˳����� 
//	includeTest();
//	return 0;

// ��������ز���
//MyClass a(99);
//MyClass b(100);
//MyClass c = a + b;
//cout << c.getAge() << endl;
//return 0;


// new / delete ��������ز���
//MyClass *myClz0 = new MyClass(1);
//delete myClz0;
//cout << "exit 0" << endl;
//return 0;


// ==,++ ��������ز���
//MyClass a(0),b(1);
//bool r = (a==b);
//cout << "reference address:" << &c << endl;
//return 0;

	
	MyClass* clz = new MyClass(99);
	MyClass myClz(99);
	
	cout << "start to build class with keyword 'static'" << endl;
	for(int i=0;i<10;i++){
		// ���ʵ��ֻ��ʵ����һ�� 
		cout << i << "th "  ;
		static MyClass *isNewClz = new MyClass(i);
	}
	
	
	cout << endl << endl << "start to build class with keyword 'const'" << endl;
	for(int i=0;i<10;i++){
		// ���ʵ��ֻ��ʵ����һ�� 
		cout << i << "th " << endl;
		const MyClass *isNewClz = new MyClass(10+i);
	}
	
//	char *filePath = "d:\1.txt";
//
//	clz->readFile(filePath);
//	cout << "file path:" << filePath << endl;
	return 0;
}
