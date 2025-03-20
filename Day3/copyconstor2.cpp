/*
	복사 생성자
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {		// 생성자, 객체가 생성될 때 호출됨
//		printf("constructor call!!\n");		
//		strcpy(this->name, name);			// 문자열 복사
//		this->age = age;					// 나이 초기화
//	}
//	Person(const Person& other) {			// 복사생성자, const & 사용: 원본 객체를 변경하지 않도록 참조 
//		printf("copy constructor!!\n");
//		this->age = other.age;				// 나이 복사
//		strncpy(this->name, other.name, strlen(other.name)+1);	// +1 해야지 null문자 붙을 수 있음
//	}
//	void printPerson() {					// 객체 정보 출력 함수
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);		// 복사 생성자 호출(p를 기반으로 p2 생성)
//	p2.printPerson();
//
//	Person p3 = p;		// 복사 생성자 호출(p를 기반으로 p3 생성, 동일한 복사 과정)
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