/*

*/

//#include <iostream>
//
//class MyClass {
//public:
//	int value;
//	//MyClass() {};
//	MyClass(int v = 0) : value(v) { }		// 생성자 (기본값 0, 생성자 초기화 리스트 사용)
//	void showMyClass() {					// 멤버 함수: 객체의 value값 출력
//		std::cout << "value: " << value << std::endl;
//	}
//};
//int main()
//{
//	// 동적할당된 MyClass 객체 생성
//	MyClass* ptr = new MyClass{ 10 };	// new연산자로 동적 객체 생성
//	// 포인터를 통해 객체 멤버 함수 호출
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//	// 동적으로 할당된 객체 메모리 해제
//	delete ptr;
//	// 스택영역에 MyClass 객체 생성
//	MyClass obj{};
//	// 포인터ptr을 obj주소로 변경(이제 ptr은 동적할당된 객체가 아님)
//	ptr = &obj;
//	// 포인터를 사용한 멤버 함수 호출
//	ptr->showMyClass();		// 간접참조
//	(*ptr).showMyClass();	// 역참조 후 호출
//	// 포인터를 사용해 멤버 변수 직접 접근
//	printf("value: %d\n", ptr->value);
//
//	return 0;
//}