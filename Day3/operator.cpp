/*
	������ �����ε�(��������)
*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	// �⺻ ������ �� �Ű������� �޴� ������(����Ʈ ��: x=0, y=0)
//	Point(int ax = 0, int ay = 0) : x{ ax }, y(ay) {
//		printf("constructor call!!\n");
//	}
//	void showPoint()	// ��ǥ ��� �Լ�
//	{
//		printf("x: %d, y: %d\n", x, y);
//	}
//	Point add(const Point& other) {		// �� ���� ��ǥ�� ���ϴ� �Լ�
//		printf("add() call!!\n");
//		return Point(x + other.x, y + other.y);
//	}
//};
//
//int main()
//{	
//	Point obj(10, 20);
//	obj.showPoint();
//	Point obj2(30, 40);
//	obj2.showPoint();
//	// �� point ��ü�� ���� ����� ������ ���ο� ��ü ����
//	Point obj3;
//	obj3 = obj.add(obj2);
//	obj3.showPoint();
//
//	return 0;
//}