/*
	static - Ŭ���� �����.(this �����Ͱ� ����), ��ü���� �����Ѵ�.
*/
//#include <iostream>
//
//class StaticTest {
//public:
//	int n;					// �Ϲ� ��� ����(�� ��ü���� ���������� ����)
//	static int static_n;	// static ��� ����(��� ��ü�� ����)
//	StaticTest();			// ������ ����
//	void print();			// ��� �Լ� ����
//};
//int StaticTest::static_n = 10;	// static ��� ���� �ʱ�ȭ�� Ŭ���� �ܺο��� �̷������ �Ѵ�.
//
//StaticTest::StaticTest() {
//	n = 20;				// �Ϲ� ��� ���� n�� 20���� �ʱ�ȭ
//	//static_n = 10;	// ���� ��� ������ ��� ��ü�� �����ϹǷ� ���� �ʱ�ȭ �ʿ� ����
//}
//void StaticTest::print() {	// static ��� ������ �Ϲ� ��� ������ ����ϴ� �Լ�
//	std::cout << "Static_n: " << static_n << "n: " << n << std::endl;
//}
//int main()
//{
//	StaticTest ob1, ob2;	// ��ü ob1�� ob2 ����(�� ��ü�� n�� 20���� �ʱ�ȭ)
//	ob1.print();			// Static_n: 10, n: 20
//	ob2.print();			// Static_n: 10, n: 20
//
//	ob2.static_n = 1000;	// ���� ��� ���� ����(��� ��ü�� ������ ��)
//	ob2.n = 50;				// ob2�� �Ϲ� ��� ���� n ����(ob1�� n���� ���� ����)
//	ob2.print();			// Static_n: 1000, n: 50
//	ob1.print();			// Static_n: 1000, n: 20(static_n�� ����Ǿ�����, n�� ������)
//
//	return 0;
//}