/*
*/

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	cout << "[ v[i], v.size(), v.capcity() ]" << endl;
//	/*for (int i = 0; i <= 32; i++) {
//		v.push_back(i + 1);
//		cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << "]" << endl;
//	}*/
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(11);
//	v2.push_back(12);
//	v2.push_back(13);
//	v2.insert(v2.begin(), 1);	// 벡터 맨 앞에 1 삽입
//	v2.insert(find(v2.begin(), v2.end(), 13), 20);	// 13찾아 그 앞에 20 삽입
//	// 벡터의 모든 원소 출력
//	for (auto i : v2) {
//		cout << i << endl;	// 각 원소 출력
//	}
//	v2.pop_back();			// 마지막 원소 제거
//	// 마지막 원소 제거 후 다시 출력
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//
//	return 0;
//}
/*
	v.push_pack(10): 마지막 원소 뒤에 10을 추가한다.
	v.insert(idx, val): idx번째 위치에 val을 넣는다.
	v.capacity(): 벡터에 할당된 메모리 크기를 리턴한다.	- v.size()
*/