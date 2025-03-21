/*
	객체를 더하는 함수: add
	참조를 리턴한다.
*/
//#include <iostream>
//
//class Point {
//	int x, y;		// x, y좌표값을 저장하는 멤버 변수
//public:
//	// 기본 생성자 및 인자 생성자
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("constrctor\n");
//	}
//	// 복사 생성자 : 다른 point 객체의 값을 복사
//	Point(const Point& other) {
//		printf("copy constructor\n");
//		x = other.x;
//		y = other.y;
//	}
//	// 좌표값을 더하는 함수
//	Point& add(const Point& other) {
//		printf("add()\n");
//		//return Point(x + other.x, y + other.y);
//		/* 참조로 리턴한다. - 불필요한 복사 생성자 방지 */
//		x = other.x;
//		y = other.y;
//		return *this;
//	}
//	// 현재 좌표값 출력
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
//	Point p3 = p.add(p2);	// 생성자를 호출하여 초기화
//	p3.showPoint();
//
//
//	return 0;
//}