//24
#include<iostream>

using namespace std;

int main24(void) {
	int a[3] = { 0,1,2 };

	int& r1 = a[0];
	int& r2 = a[1];
	int& r3 = a[2];

	int* p1 = &a[0];
	int* p2 = &a[1];
	int* p3 = &a[2];

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	cout << *p1 << endl;
	cout << *p2 << endl;
	cout << *p3 << endl;

	return 0;
}