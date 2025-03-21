/*

*/
//#include <iostream>
// // 템플릿 클래스 정의
//template <typename T>
//class CTest {
//private:
//	T num;
//public:
//	CTest(T n) : num(n){}				// 생성자: num을 초기화
//	T getData() { return num; }			// 멤버 함수: num 값을 반환 
//};
//
//template <>							// 클래스 템플릿의 특수화
//class CTest<char> {
//private:
//	char data;
//public:
//	CTest(char d): data(d) {}
//	char getData() { return data; }
//};
//
//int main()
//{
//	CTest<int> obj(10);		// 클래스 템플릿은 반드시 인스턴스 생성시 typename을 작성해야 한다.
//	std::cout << obj.getData() << std::endl;
//
//	CTest<char> obj2('a');	// 문자형 CTest 객체 생성(특수화된 템플릿 사용)
//	std::cout << obj2.getData() << std::endl;
//
//	return 0;
//}