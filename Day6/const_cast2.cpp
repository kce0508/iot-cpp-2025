/*

*/

//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;	
//public:
//	// setNum 함수 : num 값 설정
//	void setNum(int n) { num = n; }
//	// print 함수 : const 멤버함수로, num 값을 출력하고 일부 수정도 수행
//	void print()const{
//		cout << "Before: " << num;			// num의 초기값 출력
//		//num++;	
//		// const멤버 함수에서는 this 포인터가 'const'로 선언되어 있기 때문에
//		// 멤버 변수 num을 수정할 수 없지만, const_cast를 사용하면 num값을 수정할 수 있음
//		const_cast<MyClass*>(this)->num--;	// num값을 1 감소 시킴
//		cout << "  after: " << num << endl;	// 감소된 num값 출력
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setNum(10);
//	obj.print();
//
//	return 0;
//}