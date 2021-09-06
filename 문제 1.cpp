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

}