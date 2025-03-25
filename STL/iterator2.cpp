/*
*/
#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int>v = { 10, 20, 30, 40, 50 };
	// ù��° reverse_iterator��� : ���͸� �ڿ������� ���
	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;	// reverse_iterator rit�� ����Ű�� ���� ���
	}
	cout << endl;
	// �ι�° reverse_iterator ���(auto): auto�� �ݺ��� ����
	for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;	// reverse_iterator rit�� ����Ű�� ���� ���
	}
}
/*
	vector<int>::reverse_iterator rit - ������ �ݺ��� ����
	�̸� �����ϰ�, auto�� �����ص� �ȴ�.
	rbegin()�� ������ �ּ�, rend()�� ó�� ������ �����ּ�
*/