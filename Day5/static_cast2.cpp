/*
*/
//#include <iostream>
//
//class Base {
//public:
//	// Base Ŭ������ func1 �Լ�
//	void func1() { std::cout << "Base::func1()" << std::endl; }
//};
//
//class Derived : public Base {
//public: 
//	void func() { std::cout << "Derived::func()" << std::endl; }		// Derived Ŭ�������� func�Լ� �߰�
//	void func1() { std::cout << "Derived::func1()" << std::endl; }		// func1�� �������̵�(������)�Ͽ� Derived Ŭ�������� ���
//};
//class Derived2 : public Derived {
//public:
//	void func() { std::cout << "Derived::func()" << std::endl; }	// Derived2 Ŭ�������� func �Լ� �������̵�
//	void func1() { std::cout << "Derived::func1()" << std::endl; }	// func1 �Լ� �������̵�
//};
//int main()
//{
//	Base* bptr;		// Base Ÿ���� ������ bptr ����
//	Derived dobj;	// Derived ��ü dobj ����
//	bptr = static_cast<Base*>(&dobj);		// upcasting : Derived ��ü�� Base �����ͷ� ��ȯ
//	bptr->func1();	// Base Ŭ������ func1 ȣ��( �����δ� Derived Ŭ������ func1�� ȣ���)
//
//	Base bobj;		// Base ��ü bobj ����
//	Derived* dptr;	// Derived Ÿ���� ������ dptr ����
//	dptr = static_cast<Derived*>(&bobj);	// downcasting: Base��ü�� Derived �����ͷ� ��ȯ
//	dptr->func();	
//	dptr->func1();
//
//	Derived2* dptr2 = static_cast<Derived2*>(dptr);
//	dptr2->func();
//	dptr2->func1();
//
//	return 0;
//}