#include<iostream>
#include<string.h>

using namespace std;

char* made(int a) {
	char* str = (char*)malloc(sizeof(char)*a);
	return str;
}

int main_afsdgkljuytwerADS(void) {
	char* op = made(20);

	strcpy_s(op, 20, "he is nice");
	cout << op << endl;

	free(op);

	cout << op << endl;

	return 0;

}