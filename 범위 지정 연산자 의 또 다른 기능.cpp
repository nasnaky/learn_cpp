//20
#include<iostream>

using namespace std;

int a = 100;

int main20(void) {
	int a = 10;
	a += 3;
	::a += 3;
	cout << "���� ������ a��   " << a << endl;
	cout << "���� ������ a��   " << ::a << endl;

	return 0;
}