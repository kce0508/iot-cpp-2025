/*

*/
#include <iostream>

class BoxClass {
private:
	// �ڽ��� ����, ����, ���̸� �ʱ�ȭ �� 0���� ����
	int m_width{ 0 };	
	int m_height{ 0 };
	int m_length{ 0 };
public:
	// �ڽ� ���� ���
	int volume() {
		return m_width * m_height * m_length;
	}
};

int main()
{
	BoxClass b;	// BoxClass ��ü b ����
	std::cout << "b.volume:" << b.volume() << std::endl;


	return 0;
}