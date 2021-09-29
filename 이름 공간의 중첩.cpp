
#include<iostream>

namespace con {
	int num = 0;
	namespace con1 {
		int num = 1;
	}
	namespace con2 {
		int num = 2;
	}
}

int main15(void) {
	std::cout<< con::num <<std::endl;
	std::cout << con::con1::num << std::endl;
	std::cout << con::con2::num << std::endl;
	return 0;
}