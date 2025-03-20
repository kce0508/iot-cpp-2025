/*
	멤버 초기화
	1. 상수 멤버 변수의 초기화
	2. 참조 멤버 변수의 초기화
	3. 객체를 멤버로 가지는 경우
*/

//#include <iostream>
//// 1. 상수 멤버 변수의 초기화
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;			// 상수 멤버 변수는 객체 생성되기 전에 반드시 초기화가 되어야 한다. --> 콜론 초기화
//public:
//	ConstClass(int value, int value2) : m_value2(value2) { m_value = value;} // m_value(value)는 생성자 본문에서 대입연산을 통해 초기화
//	void showValue() {
//		printf("value: %d, m_value2: %d\n", m_value, m_value2);
//	}
//};
//// 2. 참조 멤버 변수의 초기화
//class RefClass {
//private:
//	int& ref;	// 레퍼런스 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 한다.
//				// 참조 멤버 변수(참조는 선언과 동시에 초기화 필요)				
//public:
//	RefClass(int& r) : ref(r){ }	// 생성자: 초기화 리스트 사용하여 참조 변수 ref초기화
//	void showValue() {
//		printf("ref: %d\n", ref);
//
//	}
//};
//// 3. 멤버 변수로 객체를 포함하는 경우
//class Position {
//private:
//	int m_x;
//	int m_y;
//public:
//	Position(int x, int y) {	// 생성자: x, y값을 받아 멤버 변수 초기화
//		printf("Position 생성자!!\n");
//		m_x = x, m_y = y;	// 멤버 변수 초기화
//	}
//	void getData() {
//		printf("x: %d, y: %d\n", m_x, m_y);
//	}
//};
//class ObjClass {		// Position 객체를 멤버 변수로 포함하는 클래스
//private:
//	Position pos;		// 객체 멤버변수
//public:
//	// 생성자: pos 객체를 초기화 리스트를 통해 초기화
//	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }
//	void showValue() {
//		pos.getData();
//
//	}
//};
//
//int main()
//{
//	ConstClass obj(10, 20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//	obj2.showValue();
//
//	std::cout << "===========================================" << std::endl;
//	ObjClass o(3, 6);
//	o.showValue();
//
//	return 0;
//}