/*
	class - setData(), getData()
*/
//#include <iostream>
//using namespace std;
//
//class AClass {
//private:
//	int n1;				// Ŭ������ private ��� ���� n1
//	int n2;				// Ŭ������ private ��� ���� n2
//public:
//	AClass() : n1(0), n2(0) {}			// ������: AClass ��ü ������ n1, n2�� 0���� �ʱ�ȭ
//	void setData(int num1, int num2) {
//		n1 = num1;
//		n2 = num2;
//	}	// setData() : ��� ���� n1, n2 ���� �����ϴ� �Լ�
//	void getData() {
//		cout << "n1: " << n1 << ", n2: " << n2 << endl;
//	}	// getData() : ��� ���� n1, n2 ���� ����ϴ� �Լ� 
//};
//
//int main()
//{
//	AClass obj;			// AClass ��ü obj ����
//
//	obj.setData(10, 20);	// n1=10, n2=20 ����
//	obj.getData();			// ����� �� ���
//
//	return 0;
//}

// setData �Լ�: Ŭ���� ��ü�� ���¸� �ܺο��� �����ϴ� ����,
// �ܺο��� ��ü�� ��� ���� ���� ������ �� �ְ� ���ش�.(���� �Լ�)
// getData �Լ�: ��ü�� ���¸� �ܺη� ��ȯ�ϴ� ����
// ��ü�� ��� ���� ���� ����ϰų� ��ȯ�ϴµ� ���.(���� �Լ�)