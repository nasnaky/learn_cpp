//20
#include<iostream>

using namespace std;

int a = 100;

int main20(void) {
	int a = 10;
	a += 3;
	::a += 3;
	cout << "지역 변수의 a는   " << a << endl;
	cout << "전역 변수의 a는   " << ::a << endl;

	return 0;
}