#include<iostream>
#include<Windows.h>		

using namespace std;

void menu();
void newd();
void add();
void mas();
void prints();

struct made{
	int id =0;
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
		case 1:Sleep(500);  newd(); break;
		case 2: Sleep(500); add(); break;
		case 3: Sleep(500); mas(); break;
		case 4: Sleep(500); prints(); break;
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
	int money;
	int a11;
	cout << "==���� �Ա�==" << endl;
	cout << "���� id :  ";
	cin >> found;
	for (a11 = 0; a11 <= 100; a11++) {
		if (a[a11].id == found){
			break;
		}
	}
	cout << "�ݾ��� �Է��ϼ��� : ";
	cin >> money;
	a[a11].money += money;
	Sleep(500);
	cout << "�Ա��� �Ϸ� �Ǿ����ϴ�.";
	Sleep(500);
}
void mas() {
	system("cls");
	int found;
	int money;
	int a11;
	cout << "==���� ���==" << endl;
	cout << "���� id :  ";
	cin >> found;
	for (a11 = 0; a11 <= 100; a11++) {
		if (a[a11].id == found) {
			break;
		}
	}
	cout << "�ݾ��� �Է��ϼ��� : ";
	cin >> money;
	a[a11].money -= money;
	Sleep(500);
	cout << "����� �Ϸ� �Ǿ����ϴ�.";
	Sleep(500);
}
void prints() {
	cout << "==��� ��¥ ���� == " << endl;
	char eo;
	system("cls");
	for (int a5 = 0; a5 <= 100; a5++) {
		if(a[a5].id == 0){
			break;
		}
		cout << "id : " << a[a5].id << endl;
		cout << "name : " << a[a5].name << endl;
		cout << "money : " << a[a5].money << endl;
		cout << endl;
		cout << endl;
	}
	cout << "�ƹ� Ű�� �Է½� �޴��� �̵� �˴ϴ�.";
	cin >> eo;
}