/*
	추상 자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생.
	따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자호출을 유도한다.
*/
//#include <iostream>
//using namespace std;
//
//class CTest {
//private:
//	int num;	// 멤버 변수 num
//public:
//	CTest(int anum) : num(anum)	{	// 생성자: num을 초기화하고 생성된 객체의 정보를 출력
//		cout << num << " CTest constructor" << endl;
//	}
//	virtual ~CTest() { cout << num << "CTest destructor" << endl; }	// 가상 소멸자
//	virtual void vfunc() {	// 가상 함수 : 자식 클래스에서 재정의 할 수 있음
//		cout << "CTest virtual function()" << endl;
//	}
//	void func() {			// 일반 함수: CTest 클래스에서만 호출 가능
//		cout << "CTest function()" << endl;
//	}
//};
//class CTestSub : public CTest {
//private:
//	int subN;				// 멤버 변수 subN
//public:
//	// 생성자: 부모클래스 CTest의 생성자를 호출하고 subN을 초기화
//	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << "CTestSub constructor" << endl; }
//	// 소멸자: CTestSub 객체가 소멸될 때 호출되고 소멸자 메시지 출력
//	~CTestSub() { cout << subN << "CTestSub destructor" << endl; }
//	// 오버라이드된 가상 함수: 부모 클래스의 vfunc()을 재정의
//	void vfunc() override { cout << "CTestSub function() override" << endl; }
//};
//int main()
//{
//	CTest obj(1);
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//	CTestSub obj2(2, 22);
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//	obj.func();		// 일반 함수 호출
//	obj.vfunc();	// 가상 함수 호출
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//	obj2.func();	// 일반 함수 호출
//	obj2.vfunc();	// 가상 함수 호출(오버라이드된 함수 호출)
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//
//	CTest* ptr = new CTestSub(3, 33);	// 업캐스팅(Base 포인터가 Derived 객체를 가리킴)
//	// 동적 할당된 객체 메모리 해제
//	delete ptr;	// CTestSub 객체 소멸자 호출 및 CTest 객체 소멸자 호출
//
//	return 0;
//}