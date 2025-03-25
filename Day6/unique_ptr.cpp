/*
	스마트 포인터: 객체의 생명 주기를 객체에 맡김으로 프로그래머의 메모리 관리 부담을 줄여준다.
	unique_ptr - 소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr을 대체)
*/

//#include <iostream>
//using namespace std;
//// 클래스 정의
//class MyClass {
//public:
//	MyClass() { cout << "MyClass() 호출" << endl; }		// 생성자
//	~MyClass() { cout << "~MyClass() 호출" << endl; }	// 소멸자
//};
//int main()
//{	// unique_ptr을 사용하여 MyClass객체 생성(동적 할당)
//	unique_ptr<MyClass> ptr(new MyClass{});
//	// unique_ptr은 복사할 수 없으므로 move()를 사용하여 소유권을 ptr2로 이동
//	unique_ptr<MyClass> ptr2 = move(ptr);
//	// ptr은 더 이상 객체를 소유하지 않음 (ptr은 nullptr이 됨)
//	return 0;  // 프로그램 종료 시 ptr2가 자동으로 객체를 해제
//}