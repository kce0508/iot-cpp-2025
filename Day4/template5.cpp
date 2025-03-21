/*
	템플릿 매개 변수
*/
//#include <iostream>
//using namespace std;
//
//// 템플릿 클래스 정의: 타입 T와 크기 sz를 매개변수로 받음
//template <typename T, int sz>
//class CTest {
//private:
//	T ary[sz]; // 배열 선언 (크기는 sz)
//public:
//	// [] 연산자 오버로딩 (쓰기 가능)
//	T& operator[](int idx) {			// 쓰기 가능 인덱스
//		if (idx < 0 || idx >= sz) {		// 인덱스 범위 검사
//			cout << "Error" << endl;	
//			exit(1);					// 프로그램 강제 종료
//		}
//		return ary[idx];				// 유효한 인덱스일 경우 해당 요소 반환
//	}
//	void getData() {
//		for (int i = 0; i < sz; i++) {
//			cout << ary[i] << endl;
//		}
//	}
//};
//int main()
//{
//	CTest<int, 5> obj;		// int 타입의 크기 5짜리 CTest 객체 생성
//	obj.operator[](0) = 10;
//	obj[1] = 20;
//	obj[2] = 30;
//	obj[3] = 40;
//	obj[4] = 50;
//
//	obj.getData();
//	cout << obj[0] << endl;
//	return 0;
//}