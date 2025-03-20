/*
	Banking System Ver 0.2
	- Account Ŭ���� ����, ��ü ������ �迭 ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
const int NAME_LEN = 20;	// ���� �̸��� �ִ� ����

void ShowMenu(void);		// �޴����
void MakeAccount(void);		// ���� ������ ���� �Լ�
void DepositMoney(void);	// �Ա�
void WithdrawMoney(void);	// ���
void ShowAllAccInfo(void);	// �ܾ���ȸ
// �޴� ������ ���� ������(enum)
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
// ����(Account) Ŭ���� ����
class Account
{
private:
	int accID;		// ���¹�ȣ
	int balance;	// �ܾ�
	char* cusName;	// �� �̸�(���� �Ҵ�)
public:
	// ������: ���� ��ȣ, �ʱ� �Աݾ�, �� �̸��� �޾� ��ü ����
	Account(int ID, int money, char* name)
		: accID(ID), balance(money)
	{	// ���̸��� �����Ҵ��Ͽ� ����
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}
	int GetAccID() { return accID; }	// ���� ID ��ȯ

	void Deposit(int money)				// �Ա� �Լ�
	{
		balance += money;
	}
	int Withdraw(int money)				// ��ݿ� ��ȯ, ������ 0��ȯ
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;
	}
	void ShowAccInfo()					// ���� ���� ��� �Լ�
	{
		cout << "����ID: " << accID << endl;
		cout << "�̸�: " << cusName << endl;
		cout << "�ܾ�: " << balance << endl;
	}
	~Account()		// �Ҹ���: �������� �Ҵ�� �޸� ����
	{
		delete []cusName;
	}
};
Account* accArr[100];	// Account ������ ���� �迭
int accNum = 0;			// ����� Account ��

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();		// �޴� ���
		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:		// 1. ���� ����
			MakeAccount();
			break;
		case DEPOSIT:	// 2. �Ա�
			DepositMoney();
			break;	
		case WITHDRAW:	// 3. ���
			WithdrawMoney();
			break;
		case INQUIRE:	// 4. ���� ��ȸ
			ShowAllAccInfo();
			break;	
		case EXIT:		// 5. ���α׷� ����
			for (int i = 0; i < accNum; i++)
				delete accArr[i];	// �������� �Ҵ�� ���� �޸� ����
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}
void ShowMenu(void)		// �޴� ��� �Լ�
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���� ����" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}
void MakeAccount(void)	// ���� ���� �Լ�
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�̸�: "; cin >> name;
	cout << "�Աݾ�: "; cin >> balance;
	cout << endl;
	// ������ ��ü�� �������� �����ϰ� �迭�� ����
	accArr[accNum++] = new Account(id, balance, name);
}
void DepositMoney(void)	// �Ա��Լ�
{
	int money;
	int id;
	cout << "[�Ա�]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�Աݾ�: "; cin >> money;
	// ����ID�� �˻��Ͽ� �Ա� ����
	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl << endl;
}
void WithdrawMoney(void)	// ��� �Լ�
{
	int money;
	int id;
	cout << "[���]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "��ݾ�: "; cin >> money;
	// ���� id�� �˻��Ͽ� ��� ����
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				cout << "�ܾ׺���" << endl << endl;
				return;
			}
			cout << "��ݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl << endl;
}
void ShowAllAccInfo(void)	// ��ü ���� ���� ��� �Լ�
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}