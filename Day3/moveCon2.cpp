/*
	�̵� ������(T&&)
	r-value reference �� �Ƕ���ͷ� ���� �̵� ������
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	// �Է� 2�� �޴� ������
//	Human(const char* name, int age) {
//		printf("�Է� 2�� ������ ȣ��\n");
//		strcpy(this->name, name);		// �̸� ����
//		this->age = age;				// ���� ����
//	}
//	// ���� ������: �ٸ� Human ��ü�� ������� ���ο� ��ü�� ����
//	Human(const Human& other) {
//		printf("���� ������ ȣ��\n");
//		strcpy(this->name, other.name);	// �ٸ� ��ü�� �̸��� ����
//		this->age = other.age;			// �ٸ� ��ü�� ���̸� ����
//	}
//	// �̵� ������: �ٸ� ��ü�� �����͸� �̵��Ͽ� ���ο� ��ü ����
//	Human(Human&& other) noexcept{		// �����͸� �̵���Ų�� (���� x)
//		printf("�̵� ������ ȣ��\n");
//		strcpy(this->name, other.name);	// ���� ��ü�� �̸��� �̵�
//		this->age = other.age;			// ���� ��ü�� ���̸� �̵�
//		// �̵� �� ���� ��ü�� ����ִ� ����(���� ��ü�� �� �̻� ��ȿ���� ������ �˸�)
//		//other.name = nullptr;
//		other.age = 0;					// ���� ��ü�� ���̴� 0���� ����
//	}
//	void printHuman() {					// ��ü�� �̸��� ���� ���
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//int main()
//{
//	Human h("ȫ�浿", 30);	// "ȫ�浿", 30���� ��ü ����
//	h.printHuman();
//
//	Human h2(h);			// ���� ������ ȣ��
//	h2.printHuman();
//
//	Human h3(std::move(h));	// �̵� ������ ȣ��: ��ü h�� �����͸� h3���� �̵�
//	h3.printHuman();
//	h.printHuman();			// �̵� �� h ��ü ���(h�� ����ִ� ����)
//
//	return 0;
//}