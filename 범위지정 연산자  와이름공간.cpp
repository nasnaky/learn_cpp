//11
#include <iostream>

namespace com1{
	void fun() {
		std::cout << "com1�� ������ �Լ�" << std::endl;
	}
}
namespace com2 {
	void fun() {
		std::cout << "com2�� ������ �Լ�" << std::endl;
	}
}

int main12(void) {
	com1::fun();
	com2::fun();
	
	return 0;
}