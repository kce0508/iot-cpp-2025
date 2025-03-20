/*
	step1. �̸��� ��ȭ��ȣ�� �����Ҵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;	// �̸��� ������ ���� �Ҵ�� ���ڿ� ������
	int age;		// ���̸� ������ ����
	char* ptel;		// ��ȭ ��ȣ�� ������ ���� �Ҵ�� ���ڿ� ������
public:
	// �⺻ ������: ��� ������ nullptr �� 0���� �ʱ�ȭ
	Human() :pname(nullptr), age(0), ptel(nullptr) {}
	// �Ű������� �޴� ������: ���޵� ���� �����Ҵ��� ���� ����
	Human(const char* name, int a, const char* tel) {
		pname = new char[strlen(name) + 1];	// �̸� �޸� �Ҵ� �� ����
		strcpy(pname, name);

		age = a;	// ���� ����

		ptel = new char[strlen(tel) + 1];	// ��ȭ��ȣ �޸� �Ҵ� �� ����
		strcpy(ptel, tel);
	}
	~Human() {		// �Ҹ���: ���� �Ҵ�� �޸� ����
		delete[] pname;	// �̸� �޸� ����
		delete[] ptel;	// ��ȭ��ȣ �޸� ����
	}

	void getData() {
		cout << "�̸�: " << pname << ", ����: " << age << ", ��ȭ��ȣ" << ptel << endl;
	}
};

int main()
{
	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();

	return 0;
}
