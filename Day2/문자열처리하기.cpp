/*
	문자열 처리하기
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str[20] = "홍길동";	// 문자 배열 str을 선언하고 "홍길동"으로 초기화
//	cout << str << endl;		// 출력
//
//	char str2[20];				// 문자 배열 선언(초기화x)
//	//str2 = "김영희";			// 문자열 배열(주소)에는 직접 문자열 대입 불가능
//	strcpy(str2, "김영희");		// 그래서 strcpy사용하여 문자열 복사
//	cout << str2 << endl;	
//
//	//char* str3 = nullptr;		// 선언
//	char str3[100];				// 사용자 입력을 받을 문자배열 선언
//	cout << "이름입력 >> ";
//	cin >> str3;				// 이름 입력받은걸 str3에 저장
//	cout << str3 << endl;		// 입력 받은 문자열 출력
//
//	const char* name;			// const char*(문자열 리터럴을 가리키는 포인터) 선언
//	name = "김철수";			// 포인터를 문자열 리털로 초기화
//	cout << name << endl;	
//
//	return 0;
//}