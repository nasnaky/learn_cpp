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
			cout << "다시 입력해 주세요.......";
			Sleep(1000);
			break;
		}
		system("cls");
	}
}

void menu() {
	cout << "-----------메뉴-----------" << endl;
	cout << "1.계자 개설" << endl;
	cout<<"2. 입금" << endl;
	cout<<"3. 출금" << endl;
	cout<<"4.계자 정보" << endl;
	cout << "5.프로그램 종료" << endl;
}
void newd(){
	system("cls");
	
	cout << "==계자 계설==" << endl;
	cout << "계자 id :  ";
	cin >> a[num].id;
	cout << "이름    :  ";
	cin >> a[num].name;
	cout << "입금액  :  ";
	cin >> a[num].money;

	num++;
}
void add() {
	system("cls");
	int found;
	cout << "==계자 입금==" << endl;
	cout << "계자 id :  ";
	cin >> found;
	for (int a11 = 0; a11 <= 100; a11++) {
		if (a[num].id == found){
			break;
		}
	}
}