/*
	vector container ���
*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	// ���Ϳ� ���߰�
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//printf("%d\n", v[2]);
//
//	/* ��� 1 */	// �Ϲ����� �ε��� ���� ��İ� at()�Լ��� ���� ���ҿ� ����
//	for (auto i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//		cout << v.at(i) << endl;
//	}
//	cout << endl << endl;
//	/* ���2 */		// size_type�� ����Ͽ� ������ ũ�� Ÿ�Կ� �°� �ε��� ���
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//	}
//	cout << endl << endl;
//	/* ���3 */		// ������ �ݺ��ڸ� ����Ͽ� ���� ����
//	vector<int>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//	cout << endl << endl;
//	/* ���4 */		// ���� ��� for���� ����Ͽ� ���� ���� ���
//	for (auto i : v) {
//		cout << i << endl;
//	}
//
//	return 0;
//}