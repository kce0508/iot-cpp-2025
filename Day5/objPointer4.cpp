/*

*/
//#include <iostream>
//
//class MyClass {
//public:
//	void show() {		// ��� �Լ�: "Hello"�� ����ϴ� �Լ�
//		std::cout << "Hello!!" << std::endl;
//	}
//};
//int main()
//{
//	// MyClass ������ ����(�ʱⰪ�� nullptr)
//	MyClass* ptr = nullptr;
//	//printf("ptr: %p\n", *ptr);
//	if (ptr != nullptr) // �����Ͱ� nullptr���� Ȯ�� �� �Լ� ȣ��
//		ptr->show();	// �����Ͱ� ��ȿ�� ���� show() ȣ��
//	else printf("ptr is null\n"); // ���� ptr�� null�̹Ƿ� �����
//
//	ptr = new MyClass{};	// �������� MyClass ��ü ����(�� �޸�)
//	ptr->show();			// ��ȿ�� ��ü�̹Ƿ� show() ȣ�� ����
//
//	return 0;
//}