/*
	step3.
	char �������� name, int Ÿ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
*/
//#define	_CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	// ������: �̸��� ���̸� �ʱ�ȭ�ϸ�, name�� �����Ҵ�
//	Human(const char* name = "default", int age = 0) {
//		printf("constructor~\n");
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	// ���� ������
//	Human(const Human& other) {
//		printf("copy constructor~\n");
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//	// �Ҹ���: ���� �Ҵ�� �޸𸮸� ����
//	~Human() {
//		printf("destructor~\n");
//		delete[] name;
//	}
//	void showHuman()const {
//		printf("name: %s, age: %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human man("ȫ��", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;
//	//xman.showHuman();
//
//	return 0;
//}