/*
	(deep copy)���� ������
	�����Ҵ� ������� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�
	name�� �޸� ���� �Ҵ�
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char* name;		// �������� �Ҵ�� ���ڿ� ����� ������
//	int age;		// ���� ����
//public:
// // ������: ���ο� ��ü�� ���鶧 ȣ���
//	Person(const char* name, int age) {
//		printf("constructor call!!\n");
//		this->name = new char[strlen(name) + 1];	// ���ڿ� ũ�⸸ŭ �����Ҵ� (+1: null���� ����)
//		strcpy(this->name, name);					// ���ڿ� ����
//		this->age = age;							// ���� ����
//	}
//	Person(const Person& other) {					// ���� ������: ���� ��ü�� ������ �� ȣ���(���� ���� ����) 
//		printf("copy constructor!!\n");
//		this->name = new char[strlen(other.name) + 1];  // ���� ���縦 ���� ���ο� �޸� �Ҵ�
//		this->age = other.age;						// ���� ����
//		strncpy(this->name, other.name, strlen(other.name) + 1);	// ���ڿ� ����
//	}
// // �Ҹ���: ��ü�� ������ �� ȣ��(�޸� ���� ����)
//	~Person() {
//		delete[] this->name;	// ���� �Ҵ�� �޸� ����
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main() {
//// ù��° ��ü ����(������ ȣ��)
//	Person p("ȫ�浿", 30);
//	p.printPerson();
//// �ι�° ��ü ����(���� ������ ȣ��)
//	Person p2(p);
//	p2.printPerson();
////����° ��ü ����(���� ������ ȣ��)
//	Person p3 = p;
//	p3.printPerson();
//	
//	return 0;	// main �Լ� �����, ��� ��ü�� �Ҹ�Ǹ� �Ҹ��� ȣ���
//}
/*
	����Ʈ�� �ڵ����� �����޴� ������: ����Ʈ ������, ���� ������, �Ҹ���
*/