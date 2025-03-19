/*
	디폴트 매개변수: 함수를 호출할 때 인자를 생략할 경우에 대신 사용되는 기본 값을 미리 지정하는 기능
*/
//#include <iostream>
//
//int func(int num = 10) {				// 매개변수 num에 기본값 10을 설정한 함수 func
//	return num * num;					// 입력된 num 값의 제곱을 반환함
//}
//int main()
//{
//	int res;							// 결과를 저장할 변수
//	res = func(10);						// 인자로 10을 전달하여 func 호출, 10의 제곱인 100 반환
//	std::cout << res << std::endl;
//
//	res = func(0);						
//	std::cout << res << std::endl;
//
//	res = func();						// 입력이 없으면 디폴트 매개변수가 적용된다.
//	std::cout << res << std::endl;		// 100출력
//
//	return 0;
//}