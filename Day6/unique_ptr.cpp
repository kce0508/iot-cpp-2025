/*
	����Ʈ ������: ��ü�� ���� �ֱ⸦ ��ü�� �ñ����� ���α׷����� �޸� ���� �δ��� �ٿ��ش�.
	unique_ptr - �������� ���������� �����ϴ� ����Ʈ ������(auto_ptr�� ��ü)
*/

//#include <iostream>
//using namespace std;
//// Ŭ���� ����
//class MyClass {
//public:
//	MyClass() { cout << "MyClass() ȣ��" << endl; }		// ������
//	~MyClass() { cout << "~MyClass() ȣ��" << endl; }	// �Ҹ���
//};
//int main()
//{	// unique_ptr�� ����Ͽ� MyClass��ü ����(���� �Ҵ�)
//	unique_ptr<MyClass> ptr(new MyClass{});
//	// unique_ptr�� ������ �� �����Ƿ� move()�� ����Ͽ� �������� ptr2�� �̵�
//	unique_ptr<MyClass> ptr2 = move(ptr);
//	// ptr�� �� �̻� ��ü�� �������� ���� (ptr�� nullptr�� ��)
//	return 0;  // ���α׷� ���� �� ptr2�� �ڵ����� ��ü�� ����
//}