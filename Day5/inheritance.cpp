/*
	Inheritance(���)
	private, public, protected
	is a(������ �����̴�.) ����, has a(����) ���谡 �����ؾ� �Ѵ�.
*/ 

//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Human	{						// �θ� Ŭ����, ���� Ŭ����, ����Ŭ����, ���̽� Ŭ����
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);		// ������ ����(�̸��� ���̸� �ʱ�ȭ)
//	void getData();
//};
//class Student : public Human {		// �ڽ� Ŭ����, �Ļ� Ŭ����, ���� Ŭ����, ����̹��� Ŭ����
//private:
//	int studentID;					// �й� ���� ����
//public:
//	Student(const char* name, int age, int studentID);
//	void showStudent();
//};
//Human::Human(const char* aname, int aage) {		// Human Ŭ������ ������ ����
//	strcpy_s(name, aname);
//	age = aage;
//}
//void Human::getData() {		// ��� ���� ���
//	cout << "�̸�: " << name << "����: " << age << endl;
//}
///* ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�. */
//Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {	// �θ� Ŭ���� ������ ȣ��
//	//strcpy(name, aname);
//	//age = aage;
//	studentID = astudentID;
//}
//void Student::showStudent() {
//	//cout << "�̸�: " << name << endl;
//	cout << "�й�: " << studentID << endl;
//}
//int main()
//{
//	Human h("ȫ�浿", 25);
//	h.getData();
//
//	Student h2{ "�Ӳ���", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//
//	return 0;
//}