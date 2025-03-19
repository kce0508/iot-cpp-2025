/*

*/
#include <iostream>

class BoxClass {
private:
	// 박스의 가로, 세로, 높이를 초기화 값 0으로 설정
	int m_width{ 0 };	
	int m_height{ 0 };
	int m_length{ 0 };
public:
	// 박스 부피 계산
	int volume() {
		return m_width * m_height * m_length;
	}
};

int main()
{
	BoxClass b;	// BoxClass 객체 b 생성
	std::cout << "b.volume:" << b.volume() << std::endl;


	return 0;
}