/*
*	함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때
*	입력없는 함수 호출시 문제가 발생한다.
*/
//#include <iostream>
//using namespace std;
//
//int func(int n = 0) {			// 첫 번째 func 함수: 매개변수 n의 기본값을 0으로 설정하여,
//	return n * n;				// 인자로 받은 n의 제곱을 반환
//}
//int func() {					// 매개변수가 없는 버전으로 항상 10을 반환
//	return 10;
//}
//int main()
//{
//	cout << func(10) << endl;	// 첫 번째 func(int n = 0)가 호출되어 10의 제곱인 100을 반환
//	//cout << func() << endl;	// func()를 호출하는 경우, 두 함수 모두 호출 가능한 후보가 된다.
//								// 에러 발생
//
//	return 0;
//}