/*
	�ǽ�
*/
//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;
//public:
// // ������: �� ���� ���� ���� �޾� �ʱ�ȭ
//	MyClass(int ax, int ay) :x(ax), y(ay) {
//		printf("constructor\n");
//	}
// // ���� ������: �ٸ� MyClass ��ü�� ���� ����
//	MyClass(const MyClass& other) {
//		x = other.x;
//		y = other.y;
//	}
// // add �Լ�: ���� ��ü�� �ٸ� ��ü�� ���� ���� ���ο� ��ü�� ��ȯ
//	MyClass add(const MyClass& other) {
//		printf("add()\n");
//		return MyClass(x + other.x, y + other.y);
//	}
//	MyClass operator+(const MyClass & other) {	// ������ �����ε�: + �����ڸ� ����Ͽ� �� ��ü�� ���� ���� ���ο� ��ü ��ȯ
//		printf("+ overoading\n");
//		return MyClass(x + other.x, y+other.y);
//	}
//	MyClass operator+ (int value) {				// �������� ������ �����ϴ� ������ �����ε�
//		printf("+ overoading with int\n");
//		return MyClass(x + value, y + value);
//	}
//	void showMyClass() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//int main() {
//	MyClass obj(10, 20);
//	MyClass obj2(20, 30);
//	MyClass obj3 = obj.add(obj2);
//	MyClass obj4 = obj.operator+(obj3);
//
//	MyClass obj5 = obj4 + 100;
//	/*200 + obj4;*/		
//
//	obj3.showMyClass();
//	obj4.showMyClass();
//	obj5.showMyClass();
//
//	return 0;
//}

// �����ε� �� �� ���� ������: 
// ::, ., *, sizeof 