/*
	��ü�� ���ϴ� �Լ�: add
	������ �����Ѵ�.
*/
//#include <iostream>
//
//class Point {
//	int x, y;		// x, y��ǥ���� �����ϴ� ��� ����
//public:
//	// �⺻ ������ �� ���� ������
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("constrctor\n");
//	}
//	// ���� ������ : �ٸ� point ��ü�� ���� ����
//	Point(const Point& other) {
//		printf("copy constructor\n");
//		x = other.x;
//		y = other.y;
//	}
//	// ��ǥ���� ���ϴ� �Լ�
//	Point& add(const Point& other) {
//		printf("add()\n");
//		//return Point(x + other.x, y + other.y);
//		/* ������ �����Ѵ�. - ���ʿ��� ���� ������ ���� */
//		x = other.x;
//		y = other.y;
//		return *this;
//	}
//	// ���� ��ǥ�� ���
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	Point p(10, 20);
//	Point p2(30, 40);
//	std::cout << "+++++++++++++++++++++++++++++++" << std::endl;
//	/*Point p3;
//	p3 = p.add(p2);*/
//	Point p3 = p.add(p2);	// �����ڸ� ȣ���Ͽ� �ʱ�ȭ
//	p3.showPoint();
//
//
//	return 0;
//}