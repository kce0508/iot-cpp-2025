/*
	함수 오버로딩(다중정의) : 이름은 같은데 매개변수의 타입이나 갯수가 다르면 다른 함수이다.
*/
//#include <iostream>
//using namespace std;
//
//int func() {						// 매개변수가 없는 func함수: 기본값 10을 반환
//	return 10;
//}
//int func(char c) {					// 매개변수로 char 타입을 받는 func 함수:
//	return c;						// char 값을 정수로 변환하여 반환
//}
//int func(int n) {
//	return 10 + n;
//}
//int func(int n1, int n2) {			
//	return n1 + n2;
//}
////char func(char c) {
////	return c;
////}
//int main()
//{
//	cout << func() << endl;
//	cout << func('a') << endl;
//	cout << func(10) << endl;
//	cout << func(10, 20) << endl;
//
//	return 0;
//}