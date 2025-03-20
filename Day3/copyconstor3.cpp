/*
	(deep copy)복사 생성자
	동적할당 받은경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장이 되어야 한다
	name을 메모리 동적 할당
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char* name;		// 동적으로 할당된 문자열 저장용 포인터
//	int age;		// 나이 저장
//public:
// // 생성자: 새로운 객체를 만들때 호출됨
//	Person(const char* name, int age) {
//		printf("constructor call!!\n");
//		this->name = new char[strlen(name) + 1];	// 문자열 크기만큼 동적할당 (+1: null문자 포함)
//		strcpy(this->name, name);					// 문자열 복사
//		this->age = age;							// 나이 저장
//	}
//	Person(const Person& other) {					// 복사 생성자: 기존 객체를 복사할 때 호출됨(깊은 복사 수행) 
//		printf("copy constructor!!\n");
//		this->name = new char[strlen(other.name) + 1];  // 깊은 복사를 위해 새로운 메모리 할당
//		this->age = other.age;						// 나이 복사
//		strncpy(this->name, other.name, strlen(other.name) + 1);	// 문자열 복사
//	}
// // 소멸자: 객체가 삭제될 때 호출(메모리 해제 역할)
//	~Person() {
//		delete[] this->name;	// 동적 할당된 메모리 해제
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main() {
//// 첫번째 객체 생성(생성자 호출)
//	Person p("홍길동", 30);
//	p.printPerson();
//// 두번째 객체 생성(복사 생성자 호출)
//	Person p2(p);
//	p2.printPerson();
////세번째 객체 생성(복사 생성자 호출)
//	Person p3 = p;
//	p3.printPerson();
//	
//	return 0;	// main 함수 종료시, 모든 객체가 소멸되며 소멸자 호출됨
//}
/*
	디폴트로 자동으로 제공받는 생성자: 디폴트 생성자, 복사 생성자, 소멸자
*/