/*
*/
//#include <iostream>
//
//class Base {
//public:
//	// Base 클래스의 func1 함수
//	void func1() { std::cout << "Base::func1()" << std::endl; }
//};
//
//class Derived : public Base {
//public: 
//	void func() { std::cout << "Derived::func()" << std::endl; }		// Derived 클래스에서 func함수 추가
//	void func1() { std::cout << "Derived::func1()" << std::endl; }		// func1을 오버라이드(재정의)하여 Derived 클래스에서 출력
//};
//class Derived2 : public Derived {
//public:
//	void func() { std::cout << "Derived::func()" << std::endl; }	// Derived2 클래스에서 func 함수 오버라이드
//	void func1() { std::cout << "Derived::func1()" << std::endl; }	// func1 함수 오버라이드
//};
//int main()
//{
//	Base* bptr;		// Base 타입의 포인터 bptr 선언
//	Derived dobj;	// Derived 객체 dobj 생성
//	bptr = static_cast<Base*>(&dobj);		// upcasting : Derived 객체를 Base 포인터로 변환
//	bptr->func1();	// Base 클래스의 func1 호출( 실제로는 Derived 클래스의 func1이 호출됨)
//
//	Base bobj;		// Base 객체 bobj 생성
//	Derived* dptr;	// Derived 타입의 포인터 dptr 선언
//	dptr = static_cast<Derived*>(&bobj);	// downcasting: Base객체를 Derived 포인터로 변환
//	dptr->func();	
//	dptr->func1();
//
//	Derived2* dptr2 = static_cast<Derived2*>(dptr);
//	dptr2->func();
//	dptr2->func1();
//
//	return 0;
//}