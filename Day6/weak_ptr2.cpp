/*
	순환참조: 두 객체가 서로를 참조하고, 둘 다 shared_ptr을 사용하여 참조를 유지하는 경우에 발생
*/
#include <iostream>

struct B;		// 전방 선언
struct A {		// A 구조체 정의
	std::shared_ptr<B> b_ptr;	// B에 대한 shared_ptr. A가 B를 소유함
};
struct B {		// B 구조체 정의
	//std::shared_ptr<A> a_ptr;		// 만약 여기에 shared_ptr을 사용하면 순환참조문제가 발생
	std::weak_ptr<A> a_ptr;			// 순환참조 방지
};
int main()
{	// A와 B 객체를 생성하고 shared_ptr에 저장
	std::shared_ptr<A> a(new A());
	std::shared_ptr<B> b(new B());

	a->b_ptr = b;	// A가 B를 소유
	b->a_ptr = a;	// B는 A를 약하게 참조(소유하지 않음)

	return 0;		// 프로그램 종료 시, shared_ptr이 자동으로 메모리를 해제함
}