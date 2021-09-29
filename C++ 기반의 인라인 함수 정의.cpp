#include<iostream>

int fon(int a) {
	return a * a;
}

int main10(void) {
	std::cout << fon(5) << std::endl;
	std::cout << fon(7.15) << std::endl; //¼Õ½Ç (0.15)

	return 0;
}