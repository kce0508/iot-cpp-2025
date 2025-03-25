/*
	dynamic_cast를 이용하여 다운캐스팅 경우는 가상함수가 있어야 한다.
*/
//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	// 가상 함수(func)는 자식 클래스에서 오버라이딩 가능 
//	virtual void func() { cout << "Super::func()" << endl; }
//	// 일반 멤버함수(오버라이딩 불가능, 정적으로 바인딩됨)
//	void func1() { cout << "Super::func1()" << endl; }	
//	void fx() { cout << "Super::fx()" << endl; }
//};
//class Sub : public Super {
//public:
//	void func() { cout << "Sub::func()" << endl; }		// 부모 클래스의 func()를 오버라이딩
//	void func2() { cout << "Sub::func2()" << endl; }	// Sub에만 있는 멤버 함수
//	void fx() { cout << "Super::fx()" << endl; }		// fx()는 오버라이딩이 아니라 단순히 동일한 이름의 함수를 선언한 것
//};
//
//int main()
//{	// Super 클래스 객체를 Super 포인터로 생성
//	Super* sp = new Super{};
//	sp->func();			// 정적 바인딩
//	sp->func1();
//	sp->fx();
//	cout << "+++++++++++ Upcasting ++++++++++++" << endl;
//	// 업캐스팅: 자식 클래스의 객체를 부모 클래스로 참조
//	Super* sp2 = new Sub{};
//	sp2->func();		// 동적 바인딩, 가상 함수
//	sp2->func1();		// 정적 바인딩, 오버라이딩되지 않음
//	sp2->fx();			// 정적 바인딩, 오버라이딩된 것이 아님
//	//sp2->func2();		// 부모 클래스 포인터로는 자식의 멤버 함수 접근 불가.
//	cout << "+++++++++++ downcasting +++++++++++" << endl;
//	// 다운캐스팅: 부모 클래스 포인터를 자식 클래스 포인터로 변환
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);
//	sp3->func();		// 동적 바인딩
//	sp3->func1();		// 정적 바인딩
//	sp3->func2();		// 자식의 멤버 함수
//	sp3->fx();			// 정적 바인딩
//
//	delete sp;			// Super 객체 해제
//	delete sp2;			// Sub 객체 해제
//
//
//	return 0;
//}