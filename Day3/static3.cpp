/*
	StaticTest��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
	3�� �Է��� �޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� ������ų ���̱� ������ 
	��´���� showmember() �޼��带 �����Ͻÿ�.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class StaticTest
//{
//private:
//	static int cnt;
//	int memberID;
//	char name[30];
//	char phone[30];
//	char addr[30];
//public:
//	StaticTest(const char* pname, const char* pphone, const char* paddr) {
//		memberID = ++cnt;
//
//		strcpy(name, pname);
//		strcpy(phone, pphone);
//		strcpy(addr, paddr);
//	}
//	void showmember() {
//		std::cout << "ȸ����ȣ: " << cnt << std::endl;
//		printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, phone, addr);
//	}
//};
//int StaticTest::cnt = 0;
//int main()
//{
//	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
//	m1.showmember();
//	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
//	m2.showmember();
//	StaticTest m3("��ö��", "010-3333-3333", "���");
//	m3.showmember();
//
//	return 0;
//}