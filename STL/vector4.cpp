/*
	vector container - 삽입, 삭제, 참조
*/
//#include <iostream>
//#include <vector>
//#include<list>
//using namespace std;
//
//int main()
//{
//	vector<string> v;	// string 타입을 저장할 벡터 v 생성
//	list<int> li;		// 정수형 데이터를 저장할 리스트 li 생성
//
//	v.push_back("tiger");
//	v.push_back("lion");
//	v.push_back("elephant");
//	v.push_back("horse");
//
//	cout << "v.front(): " << v.front() << endl;
//	cout << "v.back(): " << v.back() << endl;
//	cout << "v.capacity(): " << v.capacity() << endl;	// 벡터 용량 출력
//	cout << endl;
//	// 반복자를 사용하여 벡터의 모든 원소 출력
//	vector<string>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";		// 각 원소 출력
//	}
//	cout << endl;
//	// pop_back()으로 벡터의 마지막 원소 제거 후 출력
//	v.pop_back();
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";		// 제거 후 남은 원소 출력
//	}
//	cout << endl;
//	// 벡터에서 "elephant" 원소를 찾아 삭제
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		if (*iter == "elephant") {	// 해당 원소 삭제
//			v.erase(iter); break;	// 첫 번째로 발견된 원소만 삭제
//		}
//	}
//	cout << endl;
//	// 삭제 후 벡터의 모든 원소 출력
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";		// "elephant"가 삭제된 후 출력
//	}
//
//}
/*
	iterator 타입 : iterator, begin(), end()
*/