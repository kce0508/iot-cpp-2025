/*
	���ø� �Ű� ����
*/
//#include <iostream>
//using namespace std;
//
//// ���ø� Ŭ���� ����: Ÿ�� T�� ũ�� sz�� �Ű������� ����
//template <typename T, int sz>
//class CTest {
//private:
//	T ary[sz]; // �迭 ���� (ũ��� sz)
//public:
//	// [] ������ �����ε� (���� ����)
//	T& operator[](int idx) {			// ���� ���� �ε���
//		if (idx < 0 || idx >= sz) {		// �ε��� ���� �˻�
//			cout << "Error" << endl;	
//			exit(1);					// ���α׷� ���� ����
//		}
//		return ary[idx];				// ��ȿ�� �ε����� ��� �ش� ��� ��ȯ
//	}
//	void getData() {
//		for (int i = 0; i < sz; i++) {
//			cout << ary[i] << endl;
//		}
//	}
//};
//int main()
//{
//	CTest<int, 5> obj;		// int Ÿ���� ũ�� 5¥�� CTest ��ü ����
//	obj.operator[](0) = 10;
//	obj[1] = 20;
//	obj[2] = 30;
//	obj[3] = 40;
//	obj[4] = 50;
//
//	obj.getData();
//	cout << obj[0] << endl;
//	return 0;
//}