/*
	static
*/
//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;				// static ��� ����(��� ��ü�� ����)
//	int n;								// �Ϲ� ��� ����(�� ��ü���� ���������� ����)
//public:
//	AAA(int n);							// ������ ����
//	static void setStatic_a(int a);		// static ��� �Լ�
//	void print();						// ��� �Լ� ����
//};
//int AAA::static_a = 100;	// ���� ��� ������ Ŭ���� �ܺο��� �ݵ�� �ʱ�ȭ
//// ������ ����(�Ϲ� ��� ���� n�ʱ�ȭ)
//AAA::AAA(int n) {
//	this->n = n;
//}
//// ��ü�� ��� ������ ���� ��� ������ ����ϴ� �Լ�
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//// ���� ��� �Լ�: ���� ��� ������ ���ٰ���, �Ϲ� ��� ������ ���� �Ұ�
//void AAA::setStatic_a(int a) {
//	static_a = a;			// ���� ��� ���� ����
//	//n = 0;				// �Ϲ� ����� ������ ������ �ʴ´�. static ����� ��븸 �����ϴ�.
//}
//int main()
//{
//	AAA obj1(10), obj2(20);
//	obj1.print();
//	obj2.print();
//
//	obj1.setStatic_a(50);	// ���� ��� ���� static_a���� 50���� ����
//	obj1.print();
//
//	return 0;
//}