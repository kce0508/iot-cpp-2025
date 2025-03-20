/*
	StaticTest라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
	3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문에 
	출력담당의 showmember() 메서드를 구현하시오.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class StaticTest
//{
//private:
//	static int cnt;		// 정적 멤버 변수: 회원번호를 자동으로 증가시키기 위한 변수
//	int memberID;		// 일반 멤버 변수: 각 객체마다 고유의 회원id
//	char name[30];
//	char phone[30];
//	char addr[30];
//public:
//	// 생성자: 이름, 전화번호, 주소를 입력받고, 회원번호(cnt)를 자동으로 증가시킴
//	StaticTest(const char* pname, const char* pphone, const char* paddr) {
//		memberID = ++cnt;		// 회원번호는 cnt를 증가시켜서 부여
//		strcpy(name, pname);	
//		strcpy(phone, pphone);
//		strcpy(addr, paddr);
//	}
//	// showmember : 회원 정보를 출력하는 함수
//	void showmember() {
//		std::cout << "회원번호: " << cnt << std::endl;	// 정적 멤버 변수 cnt를 출력(모든 객체가 공유)
//		printf("이름: %s, 전화번호: %s, 주소: %s\n", name, phone, addr);	// 개별 객체의 일반 멤버 변수 출력
//	}
//};
//int StaticTest::cnt = 0;	// 정적 멤버 변수 cnt 초기화
//int main()
//{
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showmember();
//	StaticTest m2("김영희", "010-2222-2222", "부산");
//	m2.showmember();
//	StaticTest m3("김철수", "010-3333-3333", "울산");
//	m3.showmember();
//
//	return 0;
//}