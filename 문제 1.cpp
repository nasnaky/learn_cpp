#include<iostream>
#include<Windows.h>		

using namespace std;

void menu();
void newd();
void add();

struct made{
	int id;
	char name[50];
	long int money;
};


struct made a[100];
int num = 0;

int main(void) {
	int a = 0;
	while (1) {
		menu();
		cin >> a;
		switch (a)
		{
		case 1:Sleep(1000);  newd(); break;
		case 2: Sleep(1000); add(); break;
		case 3: Sleep(1000); break;
		case 4: Sleep(1000); break;
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
	system("cls");
	
	cout << "==���� �輳==" << endl;
	cout << "���� id :  ";
	cin >> a[num].id;
	cout << "�̸�    :  ";
	cin >> a[num].name;
	cout << "�Աݾ�  :  ";
	cin >> a[num].money;

	num++;
}
void add() {
	system("cls");
	int found;
	cout << "==���� �Ա�==" << endl;
	cout << "���� id :  ";
	cin >> found;
	for (int a11 = 0; a11 <= 100; a11++) {
		if (a[num].id == found){
			break;
		}
	}
}