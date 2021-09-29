#include<iostream>

namespace com6 {
	void fun(void);
	void hello(void);
}
namespace com5 {
	void fun(void);
}

int main14(void) {
	com6::fun();
	return 0;
}

void com6::hello() {
	std::cout << "hello" << std::endl;
}
void com6::fun() {
	std::cout << "com1ÀÇ fun" << std::endl;
	hello();
	com5::fun();
}
void com5::fun() {
	std::cout << "com2ÀÇ fun" << std::endl;
}
