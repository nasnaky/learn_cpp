//13
#include<iostream>

namespace com4 {
	void fun(void);
}

namespace com3 {
	void fun(void);
}

int main13(void) {
	com4::fun();
	com3::fun();
	return 0;
}

void com4::fun(void) {
	std::cout << "com4���� �� fun" << std::endl;
}
void com3::fun(void) {
	std::cout << "com3���� �� fun" << std::endl;
}