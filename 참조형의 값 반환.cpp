#include<iostream>

using namespace std;

int add1(int & a){
	a++;
	return a;
}

int main_asfdbwrwqerfsdvzcbnmhj(void) {
	int num1 = 1;
	int num2 = add1(num1);

	cout << num1 << endl;
	cout << num2 << endl;

	num1 += 1;
	num2 += 100;
	
	cout << num1 << endl;
	cout << num2 << endl;

	return 0;
}