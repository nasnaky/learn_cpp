#include<iostream>

int add(int a = 1, int b = 2) {
	return a + b;
}

int main6(void) {
	std::cout << add() << std::endl;
	std::cout << add(5) << std::endl;
	std::cout << add(3, 5) << std::endl;

	return 0;
}
//수가 없으면 수가 들어간다