#include<iostream>

int main3(void) {
	int a, b, result=0;
	std::cout << "�� ���� �Է��ϼ��� : ";
	std::cin >> a >> b;

	if (a > b) {
		for (int a1 = b + 1; a1 < a; a1++) {
			result += a1;
		}
	}
	else if(a < b){
		for (int a1 = a + 1; a1 <b; a1++) {
			result += a1;
		}
	}
	else {
		result = a;
	}

	std::cout << "�� �� ������ ���ڵ��� ���� " << result << "�Դϴ�.";

	return 0;
}