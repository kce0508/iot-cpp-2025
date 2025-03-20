/*
	이동 생성자(T&&)
	r-value reference 를 피라미터로 갖는 이동 생성자
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	// 입력 2개 받는 생성자
//	Human(const char* name, int age) {
//		printf("입력 2개 생성자 호출\n");
//		strcpy(this->name, name);		// 이름 복사
//		this->age = age;				// 나이 설정
//	}
//	// 복사 생성자: 다른 Human 객체를 기반으로 새로운 객체를 생성
//	Human(const Human& other) {
//		printf("복사 생성자 호출\n");
//		strcpy(this->name, other.name);	// 다른 객체의 이름을 복사
//		this->age = other.age;			// 다른 객체의 나이를 복사
//	}
//	// 이동 생성자: 다른 객체의 데이터를 이동하여 새로운 객체 생성
//	Human(Human&& other) noexcept{		// 데이터를 이동시킨다 (복사 x)
//		printf("이동 생성자 호출\n");
//		strcpy(this->name, other.name);	// 기존 객체의 이름을 이동
//		this->age = other.age;			// 기존 객체의 나이를 이동
//		// 이동 후 기존 객체를 비워주는 과정(기존 객체가 더 이상 유효하지 않음을 알림)
//		//other.name = nullptr;
//		other.age = 0;					// 기존 객체의 나이는 0으로 설정
//	}
//	void printHuman() {					// 객체의 이름과 나이 출력
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//int main()
//{
//	Human h("홍길동", 30);	// "홍길동", 30으로 객체 생성
//	h.printHuman();
//
//	Human h2(h);			// 복사 생성자 호출
//	h2.printHuman();
//
//	Human h3(std::move(h));	// 이동 생성자 호출: 객체 h의 데이터를 h3으로 이동
//	h3.printHuman();
//	h.printHuman();			// 이동 후 h 객체 출력(h는 비어있는 상태)
//
//	return 0;
//}