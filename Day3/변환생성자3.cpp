/*
	변환생성자
	explicit 키워드 역할
	- 암시적 변환 방지
*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;			// 정수형 멤버 변수 선언
//public:
//	explicit MyClass(int value) {	// explicit 키워드를 사용한 변환 생성자
//		printf("변환 생성자 호출!!\n");
//		this->value = value;		// 멤버 변수 초기화
//	}
//	void printMyClass() {			
//		printf("value: %d\n", value);
//	}
//};
//int main()
//{
//	MyClass obj = 10;		// 변환 생성자 호출 - 객체의 변환이 일어남
//	obj.printMyClass();
//
//	MyClass obj2{ 10 };		// 중괄호 초기화를 사용하여 객체 생성
//	obj2.printMyClass();
//
//	return 0;
//}