/*
	상속에서 객체 포인터:
	부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅된다.
*/
//#include <iostream>
//
//class Base {
//public:
//	// 부모클래스의 멤버 함수
//	void show() { printf("Base Class!!"); }
//};
//class Derived : public Base {	
//public:
//	void show() { printf("Derived Class!!"); }		// 오버라이딩(재정의)
//};
//int main()
//{
//	// Base와 Derived 클래스의 포인터 선언(초기값은 nullptr)
//	Base* bptr = nullptr;
//	Derived* dptr = nullptr;
//
//	Derived obj;				// 파생클래스 객체
// // Derived 타입 포인터가 Derived 객체를 가리킴
//	dptr = &obj;
//	dptr->show();	// Derived 클래스의 show() 호출 -> "Derived Class!!" 출력
//
//	bptr = &obj;				// 부모 타입의 포인터로 자식타입의 객체를 가리킨다.(Upcasting)
//	bptr->show();				// Base 클래스의 show() 호출 -> "Base Class!!" 출력
//	bptr->Derived::show();		// Derived 클래스의 show() 호출 -> "Derived Class!!" 출력
//
//	return 0;
//}