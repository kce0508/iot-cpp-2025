/*
	shared_ptr
	make_shared: ��ü�� ���� ī��Ʈ�� �ϳ��� �޸𸮺�Ͽ� ���� �Ҵ��Ų��. shared_ptr�� �����ϴ� �Լ�
	shared_ptr�� ���� ī��Ʈ�� ���� ��ü�� �������� �����Ѵ�. �������� shared_ptr�� ��ü�� ������ �� ������
	���۷��� ī��Ʈ�� 0�̵Ǹ� �޸𸮰� �ڵ� �����ȴ�.
*/
//#include <iostream>
//
//class MyClass {
//public:
//	MyClass() { std::cout << "MyClass constructor!!" << std::endl; }
//	~MyClass() { std::cout << "MyClass destructor!!" << std::endl; }
//	void func() { std::cout << "Hi shared_ptr" << std::endl; }
//};
//int main()
//{	// std::make_shared�� ����Ͽ� MyClass ��ü ���� �� ����
//	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
//	// ptr2�� ptr�� ������ ��ü�� ����
//	std::shared_ptr<MyClass>ptr2 = ptr;
//	printf("ptr�� ptr2�� ������ ��ü�� ����Ų��. �����Ѵ�. \n");	// shared_ptr�� ���� ī��Ʈ�� ������Ű��, ���� ��ü�� ������
//	
//	ptr2->func();	// ptr2�� ����Ͽ� MyClass�� ��� �Լ� ȣ��
//
//
//	return 0;		// ���α׷� ���� ��, ������ shared_ptr�� �Ҹ�Ǹ� MyClass ��ü�� �ڵ����� ������
//}