//16

#include<iostream>

namespace cun {
	void fun(void) {
		std::cout << "������ �Լ� ���" << std::endl;
		std::cout << "�� ������Ʈ ���� �� " << std::endl;
	}
}

int main16(void) {
	using cun::fun;
	fun();

	return 0;
}