/*

*/

//#include <iostream>
//
//class MyClass {
//public:
//	int value;
//	//MyClass() {};
//	MyClass(int v = 0) : value(v) { }		// ������ (�⺻�� 0, ������ �ʱ�ȭ ����Ʈ ���)
//	void showMyClass() {					// ��� �Լ�: ��ü�� value�� ���
//		std::cout << "value: " << value << std::endl;
//	}
//};
//int main()
//{
//	// �����Ҵ�� MyClass ��ü ����
//	MyClass* ptr = new MyClass{ 10 };	// new�����ڷ� ���� ��ü ����
//	// �����͸� ���� ��ü ��� �Լ� ȣ��
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//	// �������� �Ҵ�� ��ü �޸� ����
//	delete ptr;
//	// ���ÿ����� MyClass ��ü ����
//	MyClass obj{};
//	// ������ptr�� obj�ּҷ� ����(���� ptr�� �����Ҵ�� ��ü�� �ƴ�)
//	ptr = &obj;
//	// �����͸� ����� ��� �Լ� ȣ��
//	ptr->showMyClass();		// ��������
//	(*ptr).showMyClass();	// ������ �� ȣ��
//	// �����͸� ����� ��� ���� ���� ����
//	printf("value: %d\n", ptr->value);
//
//	return 0;
//}