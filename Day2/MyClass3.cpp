/*
	���� �Ҵ�-��ü �޸� �Ҵ� ���� ��ö���� �Ҵ�ǰ�
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class MyClass3 {
//private:
//    int id;
//    char* name;     // ���� �Ҵ�� �л� �̸��� ������ ������
//    int age;
//
//public:
//    MyClass3(int c_id, const char* c_name, int c_age) {     // ������
//        id = c_id;  // id �ʱ�ȭ
//
//        name = new char[strlen(c_name) + 1];    // name�� ���� ���� �Ҵ�: c_name ���ڿ� ���� +1(���� ���� ����) ��ŭ �޸� �Ҵ�
//        strcpy(name, c_name);   // c_name ���ڿ��� name�� ����
//
//        age = c_age;    // age �ʱ�ȭ
//    }
//    // �Ҹ���: ��ü�� ������ �� ȣ��Ǿ� �������� �Ҵ�� �޸𸮸� ����
//    ~MyClass3() {
//        delete[] name;  // �������� �Ҵ��� name �迭 �޸� ����
//    }
//
//    void setData(int l_id, const char* l_name, int l_age) { // ��ü�� ��� ������ ���ο� �� �Ҵ�
//        id = l_id;  // id ����
//
//        delete[] name;  // ���� name �޸� ����
//
//        name = new char[strlen(l_name) + 1];    // ���ο� �̸��� �´� ũ��� �޸� ���� �Ҵ�
//        strcpy(name, l_name);   // ���ο� �̸� ���ڿ� ����
//
//        age = l_age;    // age ����
//    }
//
//    void getData() {
//        cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//    }
//
//};
//
//int main() {
//    MyClass3 obj(1, "��ö��", 20); // MyClass3 ��ü ���� �� �ʱ�ȭ
//    obj.getData();
//
//    obj.setData(2, "�迵��", 50);  // setData�� ����Ͽ� ��ü�� ������ ����
//    obj.getData();
//
//    return 0;
//}
// 
// �����
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	//char name[20];
//	char* name;
//	int age;
//public:
//	//MyClass() { }		// ����Ʈ ������
//	~MyClass() { delete[] name; }		// �Ҹ���(�ڵ� ȣ��ȴ�. -�����Ҵ��� ����� ������ �ۼ��� �ʿ䰡 ����.)
//	MyClass(int _id, const char* _name, int _age);
//	void getData() const;
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {
//	id = _id;
//	age = _age;
//	name = new char[strlen(_name) + 1];		// �����Ҵ�
//	//name = _name;		// �迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����.
//	strcpy(name, _name);
//}
//void MyClass::getData() const {				// ������ �Լ�(��� ��� ������ ���ȭ ��Ų��.)
//	cout << "id: " << id << ", name: " << name << ", age" << age << endl;
//	//id = 2;
//}
//int main()
//{
//	//MyClass obj;
//	//obj.setData(1, "��ö��", 20);
//	//obg.getData();
//	MyClass obj(1, "��ö��", 20);
//	obj.getData();
//
//	return 0;
//}