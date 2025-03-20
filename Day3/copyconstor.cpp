/*
	copyconstructor(복사 생성자)
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char m_name[20];	// 이름 저장할 배열
//	int m_age;			// 나이 저장할 정수형 변수
//public:
//	Person(const char* pname, int age) {	// 생성자: 이름과 나이를 받아 초기화
//		printf("Constructor call!!\n");		// 생성자가 호출될 때 출력
//		strcpy(m_name, pname);				// pname의 문자열을 m_name에 복사
//		m_age = age;						// 나이 초기화
//	}
//	void printPerson() {					// Person 객체 정보 출력 함수
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//int main()
//{
//	Person p("홍길동", 30);			// 객체 p 생성 및 초기화
//	p.printPerson();						
//
//	Person p2(p);					// 복사 생성자를 호출하여 p2 객체 생성(기본 복사 생성자 사용)
//	p2.printPerson();
//
//	Person p3 = p;					// 복사 생성자를 호출하여 p3 객체 생성
//	p3.printPerson();
//
//	return 0;
//}