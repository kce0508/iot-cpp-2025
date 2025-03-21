/*
	연산자 오버로딩
*/
//#include <iostream>
//
//class MyClass {
//private:
//	int m_a, m_b;			// 정수형 멤버 변수
//	const char* m_name;		// 문자열 멤버 변수
//public:
//	// 기본 생성자 및 인자 생성자: 객체 초기화
//	MyClass(int a = 0, int b = 0) : m_a(a), m_b(b) { }
//	void showMyClass() {
//		std::cout << m_a << ", " << m_b << ", " << std::endl;
//	}
//};
//int main()
//{
//	//MyClass obj{ 1, 2, "홍길동" };
//	//obj.showMyClass();
//
//	//MyClass obj2;
//	//obj2 = obj;			// num = 10;
//	//obj2.showMyClass();
//	MyClass obj{ 10, 20 };
//	MyClass obj2{ 30, 40 };
//	//MyClass obj3 = obj + obj2;	// 연산자 오버로딩이 정의되지 않아 컴파일 오류 발생
//
//	return 0;
//}