#include<iostream>
#include<Windows.h>

using namespace std;

void menu();
void newd();

int a[];
int num=0;

struct made {
	int id;
	char name[50];
	long int money;
};

int main(void) {
	int a = 0;
	while (1) {
		menu();
		cin >> a;
		switch (a)
		{
		case 1: newd(); break;
		case 2: 
		case 3:
		case 4:
		case 5: return 0;
		default:
			cout << "�ٽ� �Է��� �ּ���.......";
			Sleep(1000);
			break;
		}
		system("cls");
	}
}

void menu() {
	cout << "-----------�޴�-----------" << endl;
	cout << "1.���� ����" << endl;
	cout<<"2. �Ա�" << endl;
	cout<<"3. ���" << endl;
	cout<<"4.���� ����" << endl;
	cout << "5.���α׷� ����" << endl;
}
void newd(){

}