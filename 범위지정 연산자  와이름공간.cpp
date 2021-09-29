//11
#include <iostream>

namespace com1{
	void fun() {
		std::cout << "com1로 정의한 함수" << std::endl;
	}
}
namespace com2 {
	void fun() {
		std::cout << "com2로 정의한 함수" << std::endl;
	}
}

int main12(void) {
	com1::fun();
	com2::fun();
	
	return 0;
}