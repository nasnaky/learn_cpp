#include<iostream>

void fun(void);
void fun(char a);
void fun(int a, int b);

int main5(void) {
	fun();
	fun('a');
	fun(1, 2);
	 
	return 0;
}
void fun(void) {
	std::cout << "보이드 함수" << std::endl;
}
void fun(char a) {
	std::cout << "차 함수 " << std::endl;
}
void fun(int a, int b) {
	std::cout << "인트 1,2 함수" << std::endl;
}