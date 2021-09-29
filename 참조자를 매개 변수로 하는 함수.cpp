//26
#include<iostream>

using namespace std;

void temf(int& num, int& num2) {
	int temf;
	temf = num;
	num = num2;
	num2 = temf;
}

int main26(void) {
	int a = 10;
	int a1 = 20;
	cout << a << endl;
	cout << a1 << endl;

	temf(a,a1);

	cout << a << endl;
	cout << a1 << endl;

	return 0;
}