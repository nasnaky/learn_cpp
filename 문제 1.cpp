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
	int money;
	int a11;
	cout << "==계자 입금==" << endl;
	cout << "계자 id :  ";
	cin >> found;
	for (a11 = 0; a11 <= 100; a11++) {
		if (a[a11].id == found){
			break;
		}
	}
	cout << "금액을 입력하세요 : ";
	cin >> money;
	a[a11].money += money;
	Sleep(500);
	cout << "입금이 완료 되었습니다.";
	Sleep(500);
}
void mas() {
	system("cls");
	int found;
	int money;
	int a11;
	cout << "==계자 출금==" << endl;
	cout << "계자 id :  ";
	cin >> found;
	for (a11 = 0; a11 <= 100; a11++) {
		if (a[a11].id == found) {
			break;
		}
	}
	cout << "금액을 입력하세요 : ";
	cin >> money;
	a[a11].money -= money;
	Sleep(500);
	cout << "출금이 완료 되었습니다.";
	Sleep(500);
}
void prints() {
	cout << "==모든 계짜 정보 == " << endl;
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
	cout << "아무 키나 입력시 메뉴로 이동 됩니다.";
	cin >> eo;
}