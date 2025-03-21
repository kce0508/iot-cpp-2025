/*
	객체를 더하는 함수
	객체를 리턴
*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
// // 기본 생성자 및 인자 생성자
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("constructor\n");
//	}
// // 복사 생성자: 다른 point객체의 값을 복사
//	Point(const Point& other) {
//		printf("copy constructor\n");
//		x = other.x;
//		y = other.y;
//	}
// // 두 좌표값을 더하는 함수
//	Point add(const Point& other) {
//		printf("add()\n");
//		return Point(x + other.x, y + other.y);
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//int main()
//{
//	Point p(10, 20);
//	Point p2(30, 40);
//	std::cout << "++++++++++++++++++++++++++++++++++++" << std::endl;
//	Point p3;
//	p3 = p.add(p2);
//	p3.showPoint();
//
//	Point p4;
//	p4 = p3;
//	p4.showPoint();
//	return 0;
//}