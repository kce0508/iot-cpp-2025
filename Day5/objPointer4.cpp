/*

*/
//#include <iostream>
//
//class MyClass {
//public:
//	void show() {		// 멤버 함수: "Hello"를 출력하는 함수
//		std::cout << "Hello!!" << std::endl;
//	}
//};
//int main()
//{
//	// MyClass 포인터 선언(초기값은 nullptr)
//	MyClass* ptr = nullptr;
//	//printf("ptr: %p\n", *ptr);
//	if (ptr != nullptr) // 포인터가 nullptr인지 확인 후 함수 호출
//		ptr->show();	// 포인터가 유효할 때만 show() 호출
//	else printf("ptr is null\n"); // 현재 ptr이 null이므로 실행됨
//
//	ptr = new MyClass{};	// 동적으로 MyClass 객체 생성(힙 메모리)
//	ptr->show();			// 유효한 객체이므로 show() 호출 가능
//
//	return 0;
//}