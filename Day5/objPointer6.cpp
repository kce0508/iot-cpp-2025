/*
	다운캐스팅: 자식 포인터로 부모 객체를 가리킬 수 없다.
*/
//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class"); }	// Base클래스의 show() 함수
//};
//class Derived : public Base {
//public:
//	void show() { printf("Derived Class"); }	// Derived 클래스의 show() 함수
//};
//int main()
//{
//	Base bobj();	// Base 클래스 객체 생성
//	Derived* dptr = nullptr;	// Derived 클래스 타입의 포인터 선언(초기화는 nullptr)
//
//	//dptr = &bobj;
//	/*dptr = (Base*) & bobj;
//	dptr->show();*/
//
//	dptr = (Derived*)&bobj;
//	dptr->show();
//
//	return 0;
//}