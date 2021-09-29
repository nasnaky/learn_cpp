#include<iostream>
#include<string.h>

using namespace std;

char* make(int a) {
	char* str = new char[a];
	return str;
}

int main_awertgfbvgrywtr(void) {
	char* str = make(20);

	strcpy_s(str, 20, "he is nice");
	cout << str << endl;

	delete []str;
	cout << str << endl;

	return 0;
}