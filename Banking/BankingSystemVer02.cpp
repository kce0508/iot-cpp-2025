/*
	Banking System Ver 0.2
	- Account 클래스 정의, 객체 포인터 배열 적용
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
const int NAME_LEN = 20;	// 계좌 이름의 최대 길이

void ShowMenu(void);		// 메뉴출력
void MakeAccount(void);		// 계좌 개설을 위한 함수
void DepositMoney(void);	// 입금
void WithdrawMoney(void);	// 출금
void ShowAllAccInfo(void);	// 잔액조회
// 메뉴 선택을 위한 열거형(enum)
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
// 계좌(Account) 클래스 정의
class Account
{
private:
	int accID;		// 계좌번호
	int balance;	// 잔액
	char* cusName;	// 고객 이름(동적 할당)
public:
	// 생성자: 계좌 번호, 초기 입금액, 고객 이름을 받아 객체 생성
	Account(int ID, int money, char* name)
		: accID(ID), balance(money)
	{	// 고객이름을 동적할당하여 저장
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}
	int GetAccID() { return accID; }	// 계좌 ID 반환

	void Deposit(int money)				// 입금 함수
	{
		balance += money;
	}
	int Withdraw(int money)				// 출금에 반환, 부족시 0반환
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;
	}
	void ShowAccInfo()					// 계좌 정보 출력 함수
	{
		cout << "계좌ID: " << accID << endl;
		cout << "이름: " << cusName << endl;
		cout << "잔액: " << balance << endl;
	}
	~Account()		// 소멸자: 동적으로 할당된 메모리 해제
	{
		delete []cusName;
	}
};
Account* accArr[100];	// Account 저장을 위한 배열
int accNum = 0;			// 저장된 Account 수

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();		// 메뉴 출력
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:		// 1. 계좌 개설
			MakeAccount();
			break;
		case DEPOSIT:	// 2. 입금
			DepositMoney();
			break;	
		case WITHDRAW:	// 3. 출금
			WithdrawMoney();
			break;
		case INQUIRE:	// 4. 계좌 조회
			ShowAllAccInfo();
			break;	
		case EXIT:		// 5. 프로그램 종료
			for (int i = 0; i < accNum; i++)
				delete accArr[i];	// 동적으로 할당된 계좌 메모리 해제
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}
void ShowMenu(void)		// 메뉴 출력 함수
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}
void MakeAccount(void)	// 계좌 개설 함수
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;
	// 새계좌 객체를 동적으로 생성하고 배열에 저장
	accArr[accNum++] = new Account(id, balance, name);
}
void DepositMoney(void)	// 입금함수
{
	int money;
	int id;
	cout << "[입금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;
	// 계좌ID를 검색하여 입금 진행
	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl << endl;
}
void WithdrawMoney(void)	// 출금 함수
{
	int money;
	int id;
	cout << "[출금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;
	// 계좌 id를 검색하여 출금 진행
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl << endl;
}
void ShowAllAccInfo(void)	// 전체 계좌 정보 출력 함수
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}