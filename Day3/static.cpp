/*
	static - 클래스 멤버다.(this 포인터가 없다), 객체들이 공유한다.
*/
//#include <iostream>
//
//class StaticTest {
//public:
//	int n;					// 일반 멤버 변수(각 객체마다 개별적으로 존재)
//	static int static_n;	// static 멤버 변수(모든 객체가 공유)
//	StaticTest();			// 생성자 선언
//	void print();			// 멤버 함수 선언
//};
//int StaticTest::static_n = 10;	// static 멤버 변수 초기화는 클래스 외부에서 이루어져야 한다.
//
//StaticTest::StaticTest() {
//	n = 20;				// 일반 멤버 변수 n을 20으로 초기화
//	//static_n = 10;	// 정적 멤버 변수는 모든 객체가 공유하므로 별도 초기화 필요 없음
//}
//void StaticTest::print() {	// static 멤버 변수와 일반 멤버 변수를 출력하는 함수
//	std::cout << "Static_n: " << static_n << "n: " << n << std::endl;
//}
//int main()
//{
//	StaticTest ob1, ob2;	// 객체 ob1과 ob2 생성(각 객체는 n을 20으로 초기화)
//	ob1.print();			// Static_n: 10, n: 20
//	ob2.print();			// Static_n: 10, n: 20
//
//	ob2.static_n = 1000;	// 정적 멤버 변수 변경(모든 객체에 영향을 줌)
//	ob2.n = 50;				// ob2의 일반 멤버 변수 n 변경(ob1의 n에는 영향 없음)
//	ob2.print();			// Static_n: 1000, n: 50
//	ob1.print();			// Static_n: 1000, n: 20(static_n이 변경되었지만, n은 개별적)
//
//	return 0;
//}