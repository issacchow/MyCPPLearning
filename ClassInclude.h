#ifndef ClassInclude_H
#define ClassInclude_H
#include <iostream>

using namespace std;

class A{
	public:
		A(){
			cout << "A constructor be invoked" << endl;
		}
		~A(){
			cout << "A destroy" << endl;
		}
};

class B{
  private:
	A a;
	
  public:
  	B(){
      cout<< "B constructor be invoked" << endl;
	}
	~B(){
			cout << "B destroy" << endl;
	}
	
};


#endif

