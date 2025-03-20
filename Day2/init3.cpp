/*
	콜론 초기화 - 생성자에서 멤버 변수를 생성과 동시에 초기화 하는 방법
	이니셜라이저 리스트를 사용할 때 사용되며, :(콜론)뒤에 초기화할 멤버 변수를 나열하는 방식
*/
//#include <iostream>
//using namespace std;
//
////CTime now();
//
//class CTime {			// CTime 클래스 선언
//private:
//	int m_hour{ 0 };	// 시 멤버 변수, 기본값 0
//	int m_min{ 0 };		// 분 멤버 변수, 기본값 0
//	int m_sec{ 0 };		// 초 멤버 변수, 기본값 0
//public:
//	CTime() { cout << "기본 생성자 호출" << endl; }		// 디폴트 생성자:객체 생성 시 특별한 값이 주어지지 않으면 기본값 (0, 0, 0) 사용
//	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)	// 콜론 초기화, 이니셜 라이져 리스트
//	{
//		cout << "입력 3개 받는 생성자 호출" << endl;
//		//m_hour = h;
//		//m_min = m;
//		//m_sec = s;
//	}
//	void setTime(int hour, int min, int sec) {		// 시간을 설정하는 멤버 함수
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//	void showTime() const {							// 현재 시간을 출력하는 멤버 함수 (const: 객체의 값을 변경하지 않음을 명시)
//		printf("현재 시간은 %d:%d:%d 입니다\n", m_hour, m_min, m_sec);
//	}
//};
//int main()
//{
//	//CTime now;
//	CTime now = CTime();		// 기본생성자로 초기화
//	now.showTime();				// 현재 시간 출력(기본값: 0:0:0)
//	
//	//CTime t(15, 30, 30);		
//	//CTime t = { 12, 12, 12 };
//	CTime t{ 10,11,12 };		// 중괄호 초기화
//	t.showTime();				// 현재시간 출력 (10:11:12)
//
//	return 0;
//}

// 이니셜 라이저 리스트: c++에서 생성자의 초기화 목록
// 멤버 변수를 효율적으로 초기화하고, 상수나 참조 타입의 멤버변수를 반드시 초기화해야할 때 유용
// 상속클래스에서 부모클래스의 생성자를 호출할때도 이니셜라이저 리스트를 사용하여 부모 클래스의 멤버를 초기화할 수 있습니다.