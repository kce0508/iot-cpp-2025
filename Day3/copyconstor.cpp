/*
	copyconstructor(���� ������)
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char m_name[20];	// �̸� ������ �迭
//	int m_age;			// ���� ������ ������ ����
//public:
//	Person(const char* pname, int age) {	// ������: �̸��� ���̸� �޾� �ʱ�ȭ
//		printf("Constructor call!!\n");		// �����ڰ� ȣ��� �� ���
//		strcpy(m_name, pname);				// pname�� ���ڿ��� m_name�� ����
//		m_age = age;						// ���� �ʱ�ȭ
//	}
//	void printPerson() {					// Person ��ü ���� ��� �Լ�
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//int main()
//{
//	Person p("ȫ�浿", 30);			// ��ü p ���� �� �ʱ�ȭ
//	p.printPerson();						
//
//	Person p2(p);					// ���� �����ڸ� ȣ���Ͽ� p2 ��ü ����(�⺻ ���� ������ ���)
//	p2.printPerson();
//
//	Person p3 = p;					// ���� �����ڸ� ȣ���Ͽ� p3 ��ü ����
//	p3.printPerson();
//
//	return 0;
//}