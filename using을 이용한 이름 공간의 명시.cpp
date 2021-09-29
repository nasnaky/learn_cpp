//16

#include<iostream>

namespace cun {
	void fun(void) {
		std::cout << "간단한 함수 사용" << std::endl;
		std::cout << "긴 프로젝트 사용시 편리 " << std::endl;
	}
}

int main16(void) {
	using cun::fun;
	fun();

	return 0;
}