/*
	vector
*/
//#include <iostream>
//#include <vector>		// vector ������� ����
//using namespace std;
//
//int main()
//{
//	vector<int> v;					
//	vector<int> v1{ 10 };
//	vector<int> v2(5);
//	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };
//	// �� ������ ũ�� ���
//	cout << "v size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//	cout << "v2 size: " << v2.size() << endl;
//	cout << "v3 size: " << v3.size() << endl;
//	// v2��� ���(�ʱ�ȭ���� ���� ���̹Ƿ� 0�� ��µ�)
//	for (int i = 0; i < 5; i++) {
//		printf("v2[%d]: %d   ", i, v2[i]);
//	}
//	cout << endl;
//	for (auto i : v3) {		// ������� for�� - �ε��� ����� �Ұ�
//		//cout << v3[i] << endl;
//		cout << i << endl;	// i�� v3�� ��� ���� ���� ����
//	}
//	/* begin()�� end()�� iterator(�ݺ���) Ÿ���� ��ȯ�ϴ�.(������) */
//	cout << "v3�� ù��° ��Ұ�: " << *v3.begin() << endl;
//	cout << "v3�� ù��° ��Ұ�: " << *(v3.end() - 1) << endl;
//	// end()�� ������ ����� ������ġ�� ����Ű�Ƿ�, -1�� ����� ������ ��Ҹ� ����Ų��.
//
//
//	return 0;
//}
/*
	vector.size(): ���� ũ��(����)�� ��ȯ
	vector.begin(): ù��° �ּҸ� ��ȯ
	vector.end(): �������� ���� �ּҸ� ��ȯ
*/