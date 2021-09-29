//8
#include<iostream>

int wit(int a =1, int a1 =1 , int a2= 1);

int main8(void) {

	std::cout << "[1,1,1]" << wit() << std::endl;
	std::cout << "[7,1,1]" << wit(7) << std::endl;
	std::cout << "[5,3,4]" << wit(5, 3, 4) << std::endl;
	std::cout << "[5,4,1]" << wit(5, 4) << std::endl;

	return 0;
}

int wit(int a, int a1, int a2) {
	return a * a1 * a2;
}