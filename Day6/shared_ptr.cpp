/*
	shared_ptr
	make_shared: 객체와 참조 카운트를 하나의 메모리블록에 같이 할당시킨다. shared_ptr을 생성하는 함수
	shared_ptr는 참조 카운트를 통해 객체의 소유권을 공유한다. 여러개의 shared_ptr이 객체를 참조할 수 있으며
	레퍼런스 카운트가 0이되면 메모리가 자동 해제된다.
*/
//#include <iostream>
//
//class MyClass {
//public:
//	MyClass() { std::cout << "MyClass constructor!!" << std::endl; }
//	~MyClass() { std::cout << "MyClass destructor!!" << std::endl; }
//	void func() { std::cout << "Hi shared_ptr" << std::endl; }
//};
//int main()
//{	// std::make_shared를 사용하여 MyClass 객체 생성 및 관리
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
//	// ptr2는 ptr과 동일한 객체를 공유
//	std::shared_ptr<MyClass>ptr2 = ptr;
//	printf("ptr과 ptr2는 동일한 객체를 가리킨다. 공유한다. \n");	// shared_ptr은 참조 카운트를 증가시키며, 같은 객체를 공유함
//	
//	ptr2->func();	// ptr2를 사용하여 MyClass의 멤버 함수 호출
//
//
//	return 0;		// 프로그램 종료 시, 마지막 shared_ptr이 소멸되면 MyClass 객체가 자동으로 해제됨
//}