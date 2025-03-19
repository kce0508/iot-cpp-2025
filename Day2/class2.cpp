/*
	class - setData(), getData()
*/
//#include <iostream>
//using namespace std;
//
//class AClass {
//private:
//	int n1;				// 클래스의 private 멤버 변수 n1
//	int n2;				// 클래스의 private 멤버 변수 n2
//public:
//	AClass() : n1(0), n2(0) {}			// 생성자: AClass 객체 생성시 n1, n2을 0으로 초기화
//	void setData(int num1, int num2) {
//		n1 = num1;
//		n2 = num2;
//	}	// setData() : 멤버 변수 n1, n2 값을 설정하는 함수
//	void getData() {
//		cout << "n1: " << n1 << ", n2: " << n2 << endl;
//	}	// getData() : 멤버 변수 n1, n2 값을 출력하는 함수 
//};
//
//int main()
//{
//	AClass obj;			// AClass 객체 obj 생성
//
//	obj.setData(10, 20);	// n1=10, n2=20 설정
//	obj.getData();			// 저장된 값 출력
//
//	return 0;
//}

// setData 함수: 클래스 객체의 상태를 외부에서 설정하는 역할,
// 외부에서 객체의 멤버 변수 값을 변경할 수 있게 해준다.(세터 함수)
// getData 함수: 객체의 상태를 외부로 반환하는 역할
// 객체의 멤버 변수 값을 출력하거나 반환하는데 사용.(겟터 함수)