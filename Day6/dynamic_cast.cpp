/*
	�⺻ Ŭ������ �����ϴ� value�� �Ļ��� Ŭ������ ���� ������ ��ȯ
	��Ӱ��迡�� �����ϰ� ����ȯ�� �����Ѵ�. ��ĳ����
	�ٿ�ĳ���� ���� �������� ���ؼ� virtual �޼��尡 �� �־�� �Ѵ�.
*/
//#include <iostream>
//
//class Super {
//public:
//	int n1, n2;
//};
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//class Sub2 : public Sub {
//public:
//	int n5, n6;
//};
//int main()
//{
//	Super* sp;		// �ֻ��� �θ� Ŭ���� ������
//	Sub* sup;		// �߰� �θ� Ŭ���� ������
//	Sub2* sup2;		// ���� ���� �ڽ� Ŭ���� ������
//	Sub2 obj{};		// Sub2 Ŭ���� ��ü ����
//
//	sup2 = dynamic_cast<Sub2*>(&obj);			// dynamic_cast�� ����Ͽ� obj �ּҸ� Sub2*�� ��ȯ
//	sup = dynamic_cast<Sub2*>(&obj);			// upcasting : Sub2* -> Sub* ��ȯ
//	sp = dynamic_cast<Super*>(sup2);			// upcasting : Sub2* -> Super* ��ȯ
//
//	return 0;
//}