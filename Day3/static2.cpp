/*
	static
*/
//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;				// static 멤버 변수(모든 객체가 공유)
//	int n;								// 일반 멤버 변수(각 객체마다 개별적으로 존재)
//public:
//	AAA(int n);							// 생성자 선언
//	static void setStatic_a(int a);		// static 멤버 함수
//	void print();						// 멤버 함수 선언
//};
//int AAA::static_a = 100;	// 정적 멤버 변수는 클래스 외부에서 반드시 초기화
//// 생성자 정의(일반 멤버 변수 n초기화)
//AAA::AAA(int n) {
//	this->n = n;
//}
//// 객체의 멤버 변수와 정적 멤버 변수를 출력하는 함수
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//// 정적 멤버 함수: 정적 멤버 변수만 접근가능, 일반 멤버 변수는 접근 불가
//void AAA::setStatic_a(int a) {
//	static_a = a;			// 정적 멤버 변수 변경
//	//n = 0;				// 일반 멤버의 접근은 허용되지 않는다. static 멤버의 사용만 가능하다.
//}
//int main()
//{
//	AAA obj1(10), obj2(20);
//	obj1.print();
//	obj2.print();
//
//	obj1.setStatic_a(50);	// 정적 멤버 변수 static_a값을 50으로 변경
//	obj1.print();
//
//	return 0;
//}