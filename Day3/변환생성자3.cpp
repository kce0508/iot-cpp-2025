/*
	��ȯ������
	explicit Ű���� ����
	- �Ͻ��� ��ȯ ����
*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;			// ������ ��� ���� ����
//public:
//	explicit MyClass(int value) {	// explicit Ű���带 ����� ��ȯ ������
//		printf("��ȯ ������ ȣ��!!\n");
//		this->value = value;		// ��� ���� �ʱ�ȭ
//	}
//	void printMyClass() {			
//		printf("value: %d\n", value);
//	}
//};
//int main()
//{
//	MyClass obj = 10;		// ��ȯ ������ ȣ�� - ��ü�� ��ȯ�� �Ͼ
//	obj.printMyClass();
//
//	MyClass obj2{ 10 };		// �߰�ȣ �ʱ�ȭ�� ����Ͽ� ��ü ����
//	obj2.printMyClass();
//
//	return 0;
//}