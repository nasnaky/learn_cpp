#include<iostream>

int main2(void) {
	int a;
	int b;
	std::cout << "첫번쨰 정수 입력";
	std::cin >> a;

	std::cout << "두번쨰 정수 입력";
	std::cin >> b;

	int result = a + b;
	std::cout << "두 수의 합은 " << result << "입니다." << std::endl;

	return 0;
}