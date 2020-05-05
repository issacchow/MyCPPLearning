#include "FriendFunctionClass.h"
#include <iostream>
using namespace std;
          
int main(int argc,char** argv){
	FriendFunctionClass a(200),b(400);
	FriendFunctionClass c = a+b;
	FriendFunctionClass d = a.operator+(b);


	cout << "a:" << getAge(a) << endl;
	cout << "b:" << getAge(c) << endl;
	cout << "d:" << getAge(d) << endl;
	
	int i=1+1;
	return 0;
}
