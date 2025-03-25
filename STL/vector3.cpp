/*
	vector container 출력
*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	// 벡터에 값추가
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//printf("%d\n", v[2]);
//
//	/* 출력 1 */	// 일반적인 인덱스 접근 방식과 at()함수로 벡터 원소에 접근
//	for (auto i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//		cout << v.at(i) << endl;
//	}
//	cout << endl << endl;
//	/* 출력2 */		// size_type을 사용하여 벡터의 크기 타입에 맞게 인덱스 사용
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//	}
//	cout << endl << endl;
//	/* 출력3 */		// 벡터의 반복자를 사용하여 원소 접근
//	vector<int>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//	cout << endl << endl;
//	/* 출력4 */		// 범위 기반 for문을 사용하여 벡터 원소 출력
//	for (auto i : v) {
//		cout << i << endl;
//	}
//
//	return 0;
//}