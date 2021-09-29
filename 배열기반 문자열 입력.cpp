#include<iostream>

int main4(void) {
	char a[100];
	char b[200];

	std::cout << "당신의 이름을 입력하세요 : ";
	std::cin >> a;
	
	std::cout << "당신이 좋아하는 프로그램 언어는 무엇입니까?  :  ";
	std::cin >> b;
	std::cout << "이름은 " << a << "이며, 좋아하는 프로그램 언어로는 " << b << "등이 있습니다." << std::endl;

	return 0;
}