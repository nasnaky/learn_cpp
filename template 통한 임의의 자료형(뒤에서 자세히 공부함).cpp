//11
#include<iostream>

template<typename T>
inline T ting(T a){
	return a * a;
}

int main11(void) {
	std::cout << ting(5) << std::endl;
	std::cout << ting(7.5) << std::endl;
	return 0;
}