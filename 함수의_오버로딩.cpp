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
	std::cout << "���̵� �Լ�" << std::endl;
}
void fun(char a) {
	std::cout << "�� �Լ� " << std::endl;
}
void fun(int a, int b) {
	std::cout << "��Ʈ 1,2 �Լ�" << std::endl;
}