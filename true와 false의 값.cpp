//21
#include<iostream>

using namespace std;

int main21(void) {
	int num = 10;
	int a = 0;

	cout << "ture  " << true << endl;
	cout << "false  " << false << endl;

	while (true) {
		cout << a++ << " ";
		if (a > num) {
			break;
		}
	}
	cout << endl;

	cout << "size (0)  " << sizeof(0) << endl;
	cout << "size (1)  " << sizeof(1) << endl;
	cout << "size (true) " << sizeof(true) << endl;
	cout << "size (false) " << sizeof(false) << endl;

	return 0;

}