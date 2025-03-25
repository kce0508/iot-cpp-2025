/*
	기본 클래스를 참조하는 value를 파생된 클래스에 대한 참조로 변환
	상속관계에서 안전하게 형변환을 지원한다. 업캐스팅
	다운캐스팅 경우는 다형성을 위해서 virtual 메서드가 꼭 있어야 한다.
*/
//#include <iostream>
//
//class Super {
//public:
//	int n1, n2;
//};
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//class Sub2 : public Sub {
//public:
//	int n5, n6;
//};
//int main()
//{
//	Super* sp;		// 최상위 부모 클래스 포인터
//	Sub* sup;		// 중간 부모 클래스 포인터
//	Sub2* sup2;		// 가장 하위 자식 클래스 포인터
//	Sub2 obj{};		// Sub2 클래스 객체 생성
//
//	sup2 = dynamic_cast<Sub2*>(&obj);			// dynamic_cast를 사용하여 obj 주소를 Sub2*로 변환
//	sup = dynamic_cast<Sub2*>(&obj);			// upcasting : Sub2* -> Sub* 변환
//	sp = dynamic_cast<Super*>(sup2);			// upcasting : Sub2* -> Super* 변환
//
//	return 0;
//}