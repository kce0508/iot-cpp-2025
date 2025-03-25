/*
	const_cast: 상수성을 제거하거나 추가하는 데 사용되는 타입 캐스팅 연산자
*/
//#include <iostream>
//
//int main()
//{
//	int num = 10;
//	std::cout << ++num << std::endl;	// num을 1 증가 시킨 후 출력
//	
//	const int num2 = 10;
//	std::cout << num2 << std::endl;		// const변수는 변경할 수 없음
//
//	/*int* np = const_cast<int*>(&num2);
//	*np = *np + 1;
//	std::cout << "num: " << num2 << std::endl;*/
//
//	const char str[] = "orange";		// 문자열 리터럴을 const char 배열로 선언(컴파일러가 문자열 리터럴을 수정할 수 없게 보호)
//	char* cp = const_cast<char*>(str);	// const char*을 char*로 변환(위험한 코드)
//	cp[0] = 'O';						// 첫번째 문자 'o'를 'O'로 변경하려고 시도
//	std::cout << str << std::endl;		
//
//	return 0;
//}