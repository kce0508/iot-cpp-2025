/*
	연산자 오버로딩(다중정의)
*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	// 기본 생성자 및 매개변수를 받는 생성자(디폴트 값: x=0, y=0)
//	Point(int ax = 0, int ay = 0) : x{ ax }, y(ay) {
//		printf("constructor call!!\n");
//	}
//	void showPoint()	// 좌표 출력 함수
//	{
//		printf("x: %d, y: %d\n", x, y);
//	}
//	Point add(const Point& other) {		// 두 점의 좌표를 더하는 함수
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
//	// 두 point 객체를 더한 결과를 저장할 새로운 객체 생성
//	Point obj3;
//	obj3 = obj.add(obj2);
//	obj3.showPoint();
//
//	return 0;
//}