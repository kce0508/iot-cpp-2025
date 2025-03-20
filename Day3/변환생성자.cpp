/*
	변환 생성자
	다른 타입의 객체로 변환될 때 호출되는 생성자. 입력을 한개만 가지는 생성자
*/

//#include <iostream>
//
//class MyClass {
//private:
//	int value;		// 정수형 멤버 변수
//public:
//	// 변환생성자(int 타입을 MyClass 객체로 변환)
//	MyClass(int value) {
//		printf("변환 생성자 호출!!");
//		this->value = value;
//		}
//	void printMyClass() {
//		printf("vlaue: %d\n", value);
//	}
//
//};
//int main()
//{	// 묵시적 형변환을 이용한 객체 생성(변환 생성자 호출)
//	MyClass obj = 10;
//	obj.printMyClass();
//	// 명시적 생성자 호출을 이용한 객체 생성
//	MyClass obj2(10);	//'MyClass'생성자 직접 호출
//	obj2.printMyClass();
//
//	return 0;
//}