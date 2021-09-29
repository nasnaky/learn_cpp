#include<iostream>

using namespace std;

int main23(void) {
	int num1 = 10;
	int& num2 = num1;
	int* num3 = &num1;

	cout << "num1  " << &num1 << endl;
	cout << "num2  " << &num2 << endl;
	cout << "num3  " << &num3 << endl;

	cout << "size num1  " << sizeof(num1) << endl;
	cout << "size num2  " << sizeof(num2) << endl;
	cout << "size num3  " << sizeof(num3) << endl;

	cout << "num1 ==" << num1 << endl;
	cout << "num2 ==" << num2 << endl;
	cout << "num3 ==" << num3 << endl;
	cout << "*num3 ==" << *num3 << endl;


	return 0;
}