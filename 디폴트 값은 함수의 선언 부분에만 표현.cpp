//7
#include<iostream>

int adder(int a = 1, int b = 2);

int main7(void) {
	std::cout << adder() << std::endl;
	std::cout << adder(5) << std::endl;
	std::cout << adder(3, 5) << std::endl;

	return 0;
}

int adder(int a, int b) {
	return a + b;
}