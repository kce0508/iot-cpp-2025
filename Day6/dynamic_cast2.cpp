/*
	dynamic_cast�� �̿��Ͽ� �ٿ�ĳ���� ���� �����Լ��� �־�� �Ѵ�.
*/
//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	// ���� �Լ�(func)�� �ڽ� Ŭ�������� �������̵� ���� 
//	virtual void func() { cout << "Super::func()" << endl; }
//	// �Ϲ� ����Լ�(�������̵� �Ұ���, �������� ���ε���)
//	void func1() { cout << "Super::func1()" << endl; }	
//	void fx() { cout << "Super::fx()" << endl; }
//};
//class Sub : public Super {
//public:
//	void func() { cout << "Sub::func()" << endl; }		// �θ� Ŭ������ func()�� �������̵�
//	void func2() { cout << "Sub::func2()" << endl; }	// Sub���� �ִ� ��� �Լ�
//	void fx() { cout << "Super::fx()" << endl; }		// fx()�� �������̵��� �ƴ϶� �ܼ��� ������ �̸��� �Լ��� ������ ��
//};
//
//int main()
//{	// Super Ŭ���� ��ü�� Super �����ͷ� ����
//	Super* sp = new Super{};
//	sp->func();			// ���� ���ε�
//	sp->func1();
//	sp->fx();
//	cout << "+++++++++++ Upcasting ++++++++++++" << endl;
//	// ��ĳ����: �ڽ� Ŭ������ ��ü�� �θ� Ŭ������ ����
//	Super* sp2 = new Sub{};
//	sp2->func();		// ���� ���ε�, ���� �Լ�
//	sp2->func1();		// ���� ���ε�, �������̵����� ����
//	sp2->fx();			// ���� ���ε�, �������̵��� ���� �ƴ�
//	//sp2->func2();		// �θ� Ŭ���� �����ͷδ� �ڽ��� ��� �Լ� ���� �Ұ�.
//	cout << "+++++++++++ downcasting +++++++++++" << endl;
//	// �ٿ�ĳ����: �θ� Ŭ���� �����͸� �ڽ� Ŭ���� �����ͷ� ��ȯ
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);
//	sp3->func();		// ���� ���ε�
//	sp3->func1();		// ���� ���ε�
//	sp3->func2();		// �ڽ��� ��� �Լ�
//	sp3->fx();			// ���� ���ε�
//
//	delete sp;			// Super ��ü ����
//	delete sp2;			// Sub ��ü ����
//
//
//	return 0;
//}