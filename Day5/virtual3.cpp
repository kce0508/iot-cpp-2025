/*
	�߻� �ڷ����� �̿��ؼ� ���� �Ҵ�� ��ü�� ������ ���� �޸� ���� �� ���� Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ������ �߻�.
	���� ���� Ŭ������ �Ҹ��ڸ� �������� ����� ��Ÿ���� �Ҹ���ȣ���� �����Ѵ�.
*/
//#include <iostream>
//using namespace std;
//
//class CTest {
//private:
//	int num;	// ��� ���� num
//public:
//	CTest(int anum) : num(anum)	{	// ������: num�� �ʱ�ȭ�ϰ� ������ ��ü�� ������ ���
//		cout << num << " CTest constructor" << endl;
//	}
//	virtual ~CTest() { cout << num << "CTest destructor" << endl; }	// ���� �Ҹ���
//	virtual void vfunc() {	// ���� �Լ� : �ڽ� Ŭ�������� ������ �� �� ����
//		cout << "CTest virtual function()" << endl;
//	}
//	void func() {			// �Ϲ� �Լ�: CTest Ŭ���������� ȣ�� ����
//		cout << "CTest function()" << endl;
//	}
//};
//class CTestSub : public CTest {
//private:
//	int subN;				// ��� ���� subN
//public:
//	// ������: �θ�Ŭ���� CTest�� �����ڸ� ȣ���ϰ� subN�� �ʱ�ȭ
//	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << "CTestSub constructor" << endl; }
//	// �Ҹ���: CTestSub ��ü�� �Ҹ�� �� ȣ��ǰ� �Ҹ��� �޽��� ���
//	~CTestSub() { cout << subN << "CTestSub destructor" << endl; }
//	// �������̵�� ���� �Լ�: �θ� Ŭ������ vfunc()�� ������
//	void vfunc() override { cout << "CTestSub function() override" << endl; }
//};
//int main()
//{
//	CTest obj(1);
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//	CTestSub obj2(2, 22);
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//	obj.func();		// �Ϲ� �Լ� ȣ��
//	obj.vfunc();	// ���� �Լ� ȣ��
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//	obj2.func();	// �Ϲ� �Լ� ȣ��
//	obj2.vfunc();	// ���� �Լ� ȣ��(�������̵�� �Լ� ȣ��)
//	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
//
//	CTest* ptr = new CTestSub(3, 33);	// ��ĳ����(Base �����Ͱ� Derived ��ü�� ����Ŵ)
//	// ���� �Ҵ�� ��ü �޸� ����
//	delete ptr;	// CTestSub ��ü �Ҹ��� ȣ�� �� CTest ��ü �Ҹ��� ȣ��
//
//	return 0;
//}