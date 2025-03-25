/*
*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v = { 10, 20, 30, 40, 50 };		// 벡터 초기화
//	// 첫번째 반복자 사용: iterator로 벡터의 원소를 출력
//	vector<int>::iterator it;
//	for (it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;	// 반복자 it가 가리키는 원소 출력
//	}
//	cout << endl;
//	// 두번째 반복자 사용: auto키워드로 반복자를 선언하고 벡터 원소 출력
//	for (auto it = v.begin(); it < v.end(); it++) {
//		cout << *it << endl;	// 반복자 it가 가리키는 원소 출력
//	}
//}
/*
	vector<int>::iterator iter은 순방향 반복자 선언.
	이를 생략하고 auto선언해도 된다.
*/