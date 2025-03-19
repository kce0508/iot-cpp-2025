/*
	동적 할당-전체 메모리 할당 말고 김철수만 할당되게
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class MyClass3 {
//private:
//    int id;
//    char* name;
//    int age;
//
//public:
//    MyClass3(int c_id, const char* c_name, int c_age) {
//        id = c_id;
//
//        name = new char[strlen(c_name) + 1];
//        strcpy(name, c_name);
//
//        age = c_age;
//    }
//
//    ~MyClass3() {
//        delete[] name;
//    }
//
//    void setData(int l_id, const char* l_name, int l_age) {
//        id = l_id;
//
//        delete[] name;
//
//        name = new char[strlen(l_name) + 1];
//        strcpy(name, l_name);
//
//        age = l_age;
//    }
//
//    void getData() {
//        cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//    }
//
//};
//
//int main() {
//    MyClass3 obj(1, "김철수", 20);
//    obj.getData();
//
//    obj.setData(2, "김영희", 50);
//    obj.getData();
//
//    return 0;
//}
// 
// 강사님
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
//	//MyClass() { }		// 디폴트 생성자
//	~MyClass() { delete[] name; }		// 소멸자(자동 호출된다. -동적할당경우 말고는 별도로 작성할 필요가 없다.)
//	MyClass(int _id, const char* _name, int _age);
//	void getData() const;
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {
//	id = _id;
//	age = _age;
//	name = new char[strlen(_name) + 1];		// 동적할당
//	//name = _name;		// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
//	strcpy(name, _name);
//}
//void MyClass::getData() const {				// 상수멤버 함수(모든 멤버 값들을 상수화 시킨다.)
//	cout << "id: " << id << ", name: " << name << ", age" << age << endl;
//	//id = 2;
//}
//int main()
//{
//	//MyClass obj;
//	//obj.setData(1, "김철수", 20);
//	//obg.getData();
//	MyClass obj(1, "김철수", 20);
//	obj.getData();
//
//	return 0;
//}