/*
	step1. 이름과 전화번호는 동적할당.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;	// 이름을 저장할 동적 할당된 문자열 포인터
	int age;		// 나이를 저장할 변수
	char* ptel;		// 전화 번호를 저장할 동적 할당된 문자열 포인터
public:
	// 기본 생성자: 멤버 변수를 nullptr 및 0으로 초기화
	Human() :pname(nullptr), age(0), ptel(nullptr) {}
	// 매개변수를 받는 생성자: 전달된 값을 동적할당을 통해 저장
	Human(const char* name, int a, const char* tel) {
		pname = new char[strlen(name) + 1];	// 이름 메모리 할당 및 복사
		strcpy(pname, name);

		age = a;	// 나이 저장

		ptel = new char[strlen(tel) + 1];	// 전화번호 메모리 할당 및 복사
		strcpy(ptel, tel);
	}
	~Human() {		// 소멸자: 동적 할당된 메모리 해제
		delete[] pname;	// 이름 메모리 해제
		delete[] ptel;	// 전화번호 메모리 해제
	}

	void getData() {
		cout << "이름: " << pname << ", 나이: " << age << ", 전화번호" << ptel << endl;
	}
};

int main()
{
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();

	return 0;
}
