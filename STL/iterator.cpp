/*
*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v = { 10, 20, 30, 40, 50 };		// ���� �ʱ�ȭ
//	// ù��° �ݺ��� ���: iterator�� ������ ���Ҹ� ���
//	vector<int>::iterator it;
//	for (it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;	// �ݺ��� it�� ����Ű�� ���� ���
//	}
//	cout << endl;
//	// �ι�° �ݺ��� ���: autoŰ����� �ݺ��ڸ� �����ϰ� ���� ���� ���
//	for (auto it = v.begin(); it < v.end(); it++) {
//		cout << *it << endl;	// �ݺ��� it�� ����Ű�� ���� ���
//	}
//}
/*
	vector<int>::iterator iter�� ������ �ݺ��� ����.
	�̸� �����ϰ� auto�����ص� �ȴ�.
*/