/*
	��ӿ��� ��ü ������:
	�θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű�� ��ü�� �θ�Ÿ������ ��ĳ���õȴ�.
*/
//#include <iostream>
//
//class Base {
//public:
//	// �θ�Ŭ������ ��� �Լ�
//	void show() { printf("Base Class!!"); }
//};
//class Derived : public Base {	
//public:
//	void show() { printf("Derived Class!!"); }		// �������̵�(������)
//};
//int main()
//{
//	// Base�� Derived Ŭ������ ������ ����(�ʱⰪ�� nullptr)
//	Base* bptr = nullptr;
//	Derived* dptr = nullptr;
//
//	Derived obj;				// �Ļ�Ŭ���� ��ü
// // Derived Ÿ�� �����Ͱ� Derived ��ü�� ����Ŵ
//	dptr = &obj;
//	dptr->show();	// Derived Ŭ������ show() ȣ�� -> "Derived Class!!" ���
//
//	bptr = &obj;				// �θ� Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ų��.(Upcasting)
//	bptr->show();				// Base Ŭ������ show() ȣ�� -> "Base Class!!" ���
//	bptr->Derived::show();		// Derived Ŭ������ show() ȣ�� -> "Derived Class!!" ���
//
//	return 0;
//}