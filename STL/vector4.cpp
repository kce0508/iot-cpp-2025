/*
	vector container - ����, ����, ����
*/
//#include <iostream>
//#include <vector>
//#include<list>
//using namespace std;
//
//int main()
//{
//	vector<string> v;	// string Ÿ���� ������ ���� v ����
//	list<int> li;		// ������ �����͸� ������ ����Ʈ li ����
//
//	v.push_back("tiger");
//	v.push_back("lion");
//	v.push_back("elephant");
//	v.push_back("horse");
//
//	cout << "v.front(): " << v.front() << endl;
//	cout << "v.back(): " << v.back() << endl;
//	cout << "v.capacity(): " << v.capacity() << endl;	// ���� �뷮 ���
//	cout << endl;
//	// �ݺ��ڸ� ����Ͽ� ������ ��� ���� ���
//	vector<string>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";		// �� ���� ���
//	}
//	cout << endl;
//	// pop_back()���� ������ ������ ���� ���� �� ���
//	v.pop_back();
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";		// ���� �� ���� ���� ���
//	}
//	cout << endl;
//	// ���Ϳ��� "elephant" ���Ҹ� ã�� ����
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		if (*iter == "elephant") {	// �ش� ���� ����
//			v.erase(iter); break;	// ù ��°�� �߰ߵ� ���Ҹ� ����
//		}
//	}
//	cout << endl;
//	// ���� �� ������ ��� ���� ���
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";		// "elephant"�� ������ �� ���
//	}
//
//}
/*
	iterator Ÿ�� : iterator, begin(), end()
*/