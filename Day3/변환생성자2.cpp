/*
	변환생성자 
*/
//#include <iostream>
//
//class Time {
//private:
//	int hour;
//	int min;
//	int sec;
//public:
//	Time() {}	// 기본 생성자(정의는 되어 있지만 아무런 초기화도 하지않음)
//	// 변환 생성자: 초 단위 입력을 받아 시, 분, 초로 변환
//	Time(int abssec) {
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//	void printTime() {
//		printf("현재 시간은 %d시 %d분 %d초 입니다.", hour, min, sec);
//	}
//};
//int main()
//{
//	Time now(9999);
//	//Time now(6611);
//	now.printTime();
//
//	return 0;
//}