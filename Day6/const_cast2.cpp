/*

*/

//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;	
//public:
//	// setNum �Լ� : num �� ����
//	void setNum(int n) { num = n; }
//	// print �Լ� : const ����Լ���, num ���� ����ϰ� �Ϻ� ������ ����
//	void print()const{
//		cout << "Before: " << num;			// num�� �ʱⰪ ���
//		//num++;	
//		// const��� �Լ������� this �����Ͱ� 'const'�� ����Ǿ� �ֱ� ������
//		// ��� ���� num�� ������ �� ������, const_cast�� ����ϸ� num���� ������ �� ����
//		const_cast<MyClass*>(this)->num--;	// num���� 1 ���� ��Ŵ
//		cout << "  after: " << num << endl;	// ���ҵ� num�� ���
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setNum(10);
//	obj.print();
//
//	return 0;
//}