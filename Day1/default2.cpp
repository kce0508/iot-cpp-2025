/*
	디폴트 매개변수를 여러개 적용할 때는 맨 오른쪽부터 순서대로 작성한다.
*/
//#include <iostream>
//using namespace std;
//
//int coordinates(int x, int y = 0, int z = 0);	// default값은 선언(원형)에만 작성한다.
//int main()
//{
//	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
//	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
//	cout << "(10, def, def): " << coordinates(10) << endl;
//
//	return 0;
//}
//int coordinates(int x, int y, int z)		// coordinates 함수 정의
//{
//	int res = 0;
//	res = pow(x, 2) + pow(y, 2) + pow(z, 2);		// pow 함수를 사용하여 각 좌표의 제곱을 계산하고 누적합
//	return sqrt(res);								// 누적된 제곱의 합의 제곱근을 구해서 반환(유클리드 거리 계산)
//}