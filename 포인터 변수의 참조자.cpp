//25
#include<iostream>

using namespace std;

int main25(void) {
	int num = 10;
	int* p = &num;
	int** p2 = &p;

	int& r = num;
	int*& r1 = p;
	int**& r2 = p2;

	cout << r << endl;
	cout << *r1 << endl;
	cout << **r2 << endl;

	return 0;
}