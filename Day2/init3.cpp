/*
	�ݷ� �ʱ�ȭ - �����ڿ��� ��� ������ ������ ���ÿ� �ʱ�ȭ �ϴ� ���
	�̴ϼȶ����� ����Ʈ�� ����� �� ���Ǹ�, :(�ݷ�)�ڿ� �ʱ�ȭ�� ��� ������ �����ϴ� ���
*/
//#include <iostream>
//using namespace std;
//
////CTime now();
//
//class CTime {			// CTime Ŭ���� ����
//private:
//	int m_hour{ 0 };	// �� ��� ����, �⺻�� 0
//	int m_min{ 0 };		// �� ��� ����, �⺻�� 0
//	int m_sec{ 0 };		// �� ��� ����, �⺻�� 0
//public:
//	CTime() { cout << "�⺻ ������ ȣ��" << endl; }		// ����Ʈ ������:��ü ���� �� Ư���� ���� �־����� ������ �⺻�� (0, 0, 0) ���
//	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)	// �ݷ� �ʱ�ȭ, �̴ϼ� ������ ����Ʈ
//	{
//		cout << "�Է� 3�� �޴� ������ ȣ��" << endl;
//		//m_hour = h;
//		//m_min = m;
//		//m_sec = s;
//	}
//	void setTime(int hour, int min, int sec) {
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//	void showTime() const {
//		printf("���� �ð��� %d:%d:%d �Դϴ�\n", m_hour, m_min, m_sec);
//	}
//};
//int main()
//{
//	//CTime now;
//	CTime now = CTime();
//	now.showTime();
//	
//	//CTime t(15, 30, 30);
//	//CTime t = { 12, 12, 12 };
//	CTime t{ 10,11,12 };
//	t.showTime();
//
//	return 0;
//}

// �̴ϼ� ������ ����Ʈ: c++���� �������� �ʱ�ȭ ���
// ��� ������ ȿ�������� �ʱ�ȭ�ϰ�, ����� ���� Ÿ���� ��������� �ݵ�� �ʱ�ȭ�ؾ��� �� ����
// ���Ŭ�������� �θ�Ŭ������ �����ڸ� ȣ���Ҷ��� �̴ϼȶ����� ����Ʈ�� ����Ͽ� �θ� Ŭ������ ����� �ʱ�ȭ�� �� �ֽ��ϴ�.