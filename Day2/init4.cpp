/*
	��� �ʱ�ȭ
	1. ��� ��� ������ �ʱ�ȭ
	2. ���� ��� ������ �ʱ�ȭ
	3. ��ü�� ����� ������ ���
*/

//#include <iostream>
//// 1. ��� ��� ������ �ʱ�ȭ
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;			// ��� ��� ������ ��ü �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �Ǿ�� �Ѵ�. --> �ݷ� �ʱ�ȭ
//public:
//	ConstClass(int value, int value2) : m_value2(value2) { m_value = value;} // m_value(value)�� ������ �������� ���Կ����� ���� �ʱ�ȭ
//	void showValue() {
//		printf("value: %d, m_value2: %d\n", m_value, m_value2);
//	}
//};
//// 2. ���� ��� ������ �ʱ�ȭ
//class RefClass {
//private:
//	int& ref;	// ���۷��� ���� ��ü�� �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �̷������ �Ѵ�.
//				// ���� ��� ����(������ ����� ���ÿ� �ʱ�ȭ �ʿ�)				
//public:
//	RefClass(int& r) : ref(r){ }	// ������: �ʱ�ȭ ����Ʈ ����Ͽ� ���� ���� ref�ʱ�ȭ
//	void showValue() {
//		printf("ref: %d\n", ref);
//
//	}
//};
//// 3. ��� ������ ��ü�� �����ϴ� ���
//class Position {
//private:
//	int m_x;
//	int m_y;
//public:
//	Position(int x, int y) {	// ������: x, y���� �޾� ��� ���� �ʱ�ȭ
//		printf("Position ������!!\n");
//		m_x = x, m_y = y;	// ��� ���� �ʱ�ȭ
//	}
//	void getData() {
//		printf("x: %d, y: %d\n", m_x, m_y);
//	}
//};
//class ObjClass {		// Position ��ü�� ��� ������ �����ϴ� Ŭ����
//private:
//	Position pos;		// ��ü �������
//public:
//	// ������: pos ��ü�� �ʱ�ȭ ����Ʈ�� ���� �ʱ�ȭ
//	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }
//	void showValue() {
//		pos.getData();
//
//	}
//};
//
//int main()
//{
//	ConstClass obj(10, 20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//	obj2.showValue();
//
//	std::cout << "===========================================" << std::endl;
//	ObjClass o(3, 6);
//	o.showValue();
//
//	return 0;
//}