/*

*/
//#include <iostream>
// // ���ø� Ŭ���� ����
//template <typename T>
//class CTest {
//private:
//	T num;
//public:
//	CTest(T n) : num(n){}				// ������: num�� �ʱ�ȭ
//	T getData() { return num; }			// ��� �Լ�: num ���� ��ȯ 
//};
//
//template <>							// Ŭ���� ���ø��� Ư��ȭ
//class CTest<char> {
//private:
//	char data;
//public:
//	CTest(char d): data(d) {}
//	char getData() { return data; }
//};
//
//int main()
//{
//	CTest<int> obj(10);		// Ŭ���� ���ø��� �ݵ�� �ν��Ͻ� ������ typename�� �ۼ��ؾ� �Ѵ�.
//	std::cout << obj.getData() << std::endl;
//
//	CTest<char> obj2('a');	// ������ CTest ��ü ����(Ư��ȭ�� ���ø� ���)
//	std::cout << obj2.getData() << std::endl;
//
//	return 0;
//}