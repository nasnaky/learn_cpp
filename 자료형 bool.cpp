//22
#include<iostream>

using namespace std;

bool zero(int num) {
	if (num >= 0) {
		return true;
	}
	else {
		return false;
	}
}

int main22(void) {
	int num;
	bool asd;
	cout << "���� �Է��ϼ��� : ";
	cin >> num;
	asd = zero(num);
	if (asd) {
		cout << "��� �Դϴ�.";
	}
	else {
		cout << "����� �ƴմϴ�.";
	}
	return 0;
}