/*
	moveconstructor(이동생성자)
*/
//#include <iostream>
//
//int main()
//{
//	int n = 10;			
//	int& rn = n;		// 레퍼런스, 일반참조: rn은 n을 참조
//	const int& ra = 10;	// 상수 참조: 임시 객체(10)을 참조(컴파일러가 내부적으로 새로운 변수로 변환)
//
//	int&& rrn = 10;		// r-value 참조: 우항 값(임시 값) 10을 rrn이 참조
//	// 각 변수의 값을 출력
//	std::cout << n << ", " << rn << ", " << ra << ", " << rrn << std::endl;
//
//	return 0;
//}