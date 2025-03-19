/*
	생성자 constructor
	생성자 호출로 객체가 만들어진다.
	객체 생성시에 맞는 생성자가 없으면 객체는 생성되지 않는다
*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int m_num1;
//	int m_num2;
//public:
//	MyClass(){}							// 기본 생성자: 객체가 생성될 때 호출되며 멤버 변수들을 초기화하지 않음
//	MyClass(int num1, int num2) {		// 생성자(입력을 두개 받는)
//		m_num1 = num1;					// m_num1에 num1값을 대입
//		m_num2 = num2;					// m_num2에 num2값을 대입
//	}
//	void printData() {					// printData 함수: MyClass객체의 멤버 변수들을 출력하는 함수
//		cout << "나는 MyClass의 인스턴스 입니다.";
//		cout << "m_num1: " << m_num1 << "m_num2: " << m_num2 << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;				// 기본 생성자 호출로 객체 obj생성(초기화되지 않은 상태)
//	MyClass obj2(100, 200);		// 생성자 호출시 100과 200값을 받아 객체 obj2 생성
//	obj2.printData();			// obj2의 멤버 변수 m_num1과 m_num2값을 출력
//
//	return 0;
//}