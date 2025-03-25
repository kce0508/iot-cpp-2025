/*
*/
#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int>v = { 10, 20, 30, 40, 50 };
	// 첫번째 reverse_iterator사용 : 벡터를 뒤에서부터 출력
	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;	// reverse_iterator rit가 가리키는 원소 출력
	}
	cout << endl;
	// 두번째 reverse_iterator 사용(auto): auto로 반복자 선언
	for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;	// reverse_iterator rit가 가리키는 원소 출력
	}
}
/*
	vector<int>::reverse_iterator rit - 역방향 반복자 선언
	이를 생략하고, auto로 선언해도 된다.
	rbegin()은 마지막 주소, rend()은 처음 원소의 이전주소
*/