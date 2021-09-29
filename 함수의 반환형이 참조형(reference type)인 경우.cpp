//27
#include<iostream>

using namespace std;

int& add(int& a ) {
	a++;
	return a;
}

int main_asdfa(void) {
	int num1 = 1;
	int& num2 = add(num1);
	cout << "num1" << num1 << endl;
	cout << "num2" << num2 << endl;

	num1++;
	num2++;

	cout << "num1" << num1 << endl;
	cout << "num2" << num2 << endl;
	return 0;
}