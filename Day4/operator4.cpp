/*
	실습
*/
//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;
//public:
// // 생성자: 두 개의 정수 값을 받아 초기화
//	MyClass(int ax, int ay) :x(ax), y(ay) {
//		printf("constructor\n");
//	}
// // 복사 생성자: 다른 MyClass 객체의 값을 복사
//	MyClass(const MyClass& other) {
//		x = other.x;
//		y = other.y;
//	}
// // add 함수: 현재 객체와 다른 객체의 값을 더한 새로운 객체를 반환
//	MyClass add(const MyClass& other) {
//		printf("add()\n");
//		return MyClass(x + other.x, y + other.y);
//	}
//	MyClass operator+(const MyClass & other) {	// 연산자 오버로딩: + 연산자를 사용하여 두 객체의 값을 더한 새로운 객체 반환
//		printf("+ overoading\n");
//		return MyClass(x + other.x, y+other.y);
//	}
//	MyClass operator+ (int value) {				// 정수와의 덧셈을 지원하는 연산자 오버로딩
//		printf("+ overoading with int\n");
//		return MyClass(x + value, y + value);
//	}
//	void showMyClass() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//int main() {
//	MyClass obj(10, 20);
//	MyClass obj2(20, 30);
//	MyClass obj3 = obj.add(obj2);
//	MyClass obj4 = obj.operator+(obj3);
//
//	MyClass obj5 = obj4 + 100;
//	/*200 + obj4;*/		
//
//	obj3.showMyClass();
//	obj4.showMyClass();
//	obj5.showMyClass();
//
//	return 0;
//}

// 오버로딩 할 수 없는 연산자: 
// ::, ., *, sizeof 