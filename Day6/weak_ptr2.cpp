/*
	��ȯ����: �� ��ü�� ���θ� �����ϰ�, �� �� shared_ptr�� ����Ͽ� ������ �����ϴ� ��쿡 �߻�
*/
#include <iostream>

struct B;		// ���� ����
struct A {		// A ����ü ����
	std::shared_ptr<B> b_ptr;	// B�� ���� shared_ptr. A�� B�� ������
};
struct B {		// B ����ü ����
	//std::shared_ptr<A> a_ptr;		// ���� ���⿡ shared_ptr�� ����ϸ� ��ȯ���������� �߻�
	std::weak_ptr<A> a_ptr;			// ��ȯ���� ����
};
int main()
{	// A�� B ��ü�� �����ϰ� shared_ptr�� ����
	std::shared_ptr<A> a(new A());
	std::shared_ptr<B> b(new B());

	a->b_ptr = b;	// A�� B�� ����
	b->a_ptr = a;	// B�� A�� ���ϰ� ����(�������� ����)

	return 0;		// ���α׷� ���� ��, shared_ptr�� �ڵ����� �޸𸮸� ������
}