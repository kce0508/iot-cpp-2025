/*
	���� ������
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {		// ������, ��ü�� ������ �� ȣ���
//		printf("constructor call!!\n");		
//		strcpy(this->name, name);			// ���ڿ� ����
//		this->age = age;					// ���� �ʱ�ȭ
//	}
//	Person(const Person& other) {			// ���������, const & ���: ���� ��ü�� �������� �ʵ��� ���� 
//		printf("copy constructor!!\n");
//		this->age = other.age;				// ���� ����
//		strncpy(this->name, other.name, strlen(other.name)+1);	// +1 �ؾ��� null���� ���� �� ����
//	}
//	void printPerson() {					// ��ü ���� ��� �Լ�
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("ȫ�浿", 30);
//	p.printPerson();
//
//	Person p2(p);		// ���� ������ ȣ��(p�� ������� p2 ����)
//	p2.printPerson();
//
//	Person p3 = p;		// ���� ������ ȣ��(p�� ������� p3 ����, ������ ���� ����)
//	p3.printPerson();
//
//	return 0;
//}

//void a(int aa) {
//	aa++;
//}
//
//void main()
//{
//	int n = 10;
//	a(n);
//}