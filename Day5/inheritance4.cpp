/*
	��� ���迡�� ��ü ���� �� �Ҹ�
*/
//#include <iostream>
//using namespace std;
//	// �θ� Ŭ����
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int an) {		// ������ (��ü ������ ȣ���)
//		num = an;
//		cout << num << " SuperClass Constructor" << endl;
//	}
//	~SuperClass() {				// �Ҹ��� (��ü�� ������ �� ȣ���)
//		cout << num << " SuperClass Destructor" << endl;
//	}
//};
// // �ڽ� Ŭ���� (SubClass)->superClass ���
//class SubClass : public SuperClass {
//private:
//	int subNum;
//public:
// // ������(�θ� Ŭ������ ������ ȣ�� + �߰� ��� �ʱ�ȭ)
//	SubClass(int an, int an2) : SuperClass(an) {
//		subNum = an2;
//		cout << subNum << " SubClass Constructor" << endl;
//	}
// // �Ҹ��� (��ü�� ������ �� ȣ���)
//	~SubClass() {
//		cout << subNum << " SubClass Destructor" << endl;
//	}
//};
//int main()
//{
//	// SuperClass ��ü ����
//	SuperClass s{ 1 };
//	cout << "=++++++++++++++++++++++++++++" << endl;
// // SubClass ��ü ����
// // �θ�Ŭ������ �����ڰ� ���� �����(SuperClass)
// // ���� �ڽ� Ŭ������ �����ڰ� �����(SubClass)
//	SubClass sub{ 2, 22 };
//
//
//	return 0;
//}
/*
	��ü�� ������ �� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ���.
	�� �������� ȣ��� �������� ������ �ٸ���.	
*/