#include<iostream>

int main4(void) {
	char a[100];
	char b[200];

	std::cout << "����� �̸��� �Է��ϼ��� : ";
	std::cin >> a;
	
	std::cout << "����� �����ϴ� ���α׷� ���� �����Դϱ�?  :  ";
	std::cin >> b;
	std::cout << "�̸��� " << a << "�̸�, �����ϴ� ���α׷� ���δ� " << b << "���� �ֽ��ϴ�." << std::endl;

	return 0;
}