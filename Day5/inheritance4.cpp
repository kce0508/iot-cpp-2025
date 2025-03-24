/*
	상속 관계에서 객체 생성 및 소멸
*/
//#include <iostream>
//using namespace std;
//	// 부모 클래스
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int an) {		// 생성자 (객체 생성시 호출됨)
//		num = an;
//		cout << num << " SuperClass Constructor" << endl;
//	}
//	~SuperClass() {				// 소멸자 (객체가 삭제될 때 호출됨)
//		cout << num << " SuperClass Destructor" << endl;
//	}
//};
// // 자식 클래스 (SubClass)->superClass 상속
//class SubClass : public SuperClass {
//private:
//	int subNum;
//public:
// // 생성자(부모 클래스의 생성자 호출 + 추가 멤버 초기화)
//	SubClass(int an, int an2) : SuperClass(an) {
//		subNum = an2;
//		cout << subNum << " SubClass Constructor" << endl;
//	}
// // 소멸자 (객체가 삭제될 때 호출됨)
//	~SubClass() {
//		cout << subNum << " SubClass Destructor" << endl;
//	}
//};
//int main()
//{
//	// SuperClass 객체 생성
//	SuperClass s{ 1 };
//	cout << "=++++++++++++++++++++++++++++" << endl;
// // SubClass 객체 생성
// // 부모클래스의 생성자가 먼저 실행됨(SuperClass)
// // 이후 자식 클래스의 생성자가 실행됨(SubClass)
//	SubClass sub{ 2, 22 };
//
//
//	return 0;
//}
/*
	객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다르다.
	즉 생성자의 호출과 생성자의 실행은 다르다.	
*/