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
	cout << "수를 입력하세요 : ";
	cin >> num;
	asd = zero(num);
	if (asd) {
		cout << "양수 입니다.";
	}
	else {
		cout << "양수가 아닙니다.";
	}
	return 0;
}