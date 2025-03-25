/*
	임시 객체: 특정 표현식에서 일시적으로 생성되었다가, 해당 표현식이 끝나면 바로 소멸하는 객체
*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		cout << num << " constructor" << endl;
//	}
//	~MyClass() { cout << num << " deftructor" << endl; }
//};
//int main()
//{
//	MyClass obj{ 10 };					// 정적 객체 obj 생성
//	MyClass obj2 = MyClass{ 20 };		// 임시객체를 생성한 후 obj2로 복사
//	MyClass{ 30 };
//
//	cout << "bye~~" << endl;
//
//
//	return 0;		// main 함수 종료 시, obj와 obj2가 소멸됨
//}