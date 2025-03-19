/*
	step1. 이름과 전화번호는 동적할당.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {
//private:
//	char* pname;
//	int age;
//	char* ptel;
//public:
//	
//	Human() :pname(nullptr), age(0), ptel(nullptr) {}
//	Human(const char* name, int a, const char* tel) {
//		pname = new char[strlen(name) + 1];
//		strcpy(pname, name);
//
//		age = a;
//
//		ptel = new char[strlen(tel) + 1];
//		strcpy(ptel, tel);
//	}
//	~Human() {
//		delete[] pname;
//		delete[] ptel;
//	}
//
//	void getData() {
//		cout << "이름: " << pname << ", 나이: " << age << ", 전화번호" << ptel << endl;
//	}
//};
//
//int main()
//{
//	Human h("홍길동", 30, "010-1234-1234");
//	h.getData();
//
//	return 0;
//}
