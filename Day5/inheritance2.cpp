/*
	protected ��������� ��� ���� �ڽ�Ŭ�������� ���� ����
*/

//#include <iostream>
//using namespace std;
//	// �θ� Ŭ����
//class Human {
//protected: 
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
// // �ڽ� Ŭ����
//class Student : public Human{
//private:
//	int studentID;
//public:
//	Student(const char* name, int age, int studentID);
//	void showStudent();
//};
// // Human Ŭ������ ������ ����
//Human::Human(const char* aname, int aage) {
//	strcpy_s(name, aname);
//	age = aage;
//}
// // ��� ���� ���
//void Human::getData() {
//	cout << "�̸�: " << name << ", ����: " << age << endl;
//}
// // �θ�Ŭ������ �����ڸ� ȣ���Ͽ� name�� age�� �ʱ�ȭ
//Student::Student(const char* aname, int aage, int astudentID) :Human(aname, aage) {
//	studentID = astudentID;
//}
// // �л� ���� ���
//void Student::showStudent() {
//	cout << "�̸�: " << name << ", ����: " << age;
//	cout << ", �й�: " << studentID << endl;
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