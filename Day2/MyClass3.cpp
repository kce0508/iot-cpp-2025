/*
	동적 할당-전체 메모리 할당 말고 김철수만 할당되게
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class MyClass3 {
//private:
//    int id;
//    char* name;     // 동적 할당된 학생 이름을 저장할 포인터
//    int age;
//
//public:
//    MyClass3(int c_id, const char* c_name, int c_age) {     // 생성자
//        id = c_id;  // id 초기화
//
//        name = new char[strlen(c_name) + 1];    // name에 대해 동적 할당: c_name 문자열 길이 +1(종료 문자 포함) 만큼 메모리 할당
//        strcpy(name, c_name);   // c_name 문자열을 name에 복사
//
//        age = c_age;    // age 초기화
//    }
//    // 소멸자: 객체가 삭제될 때 호출되어 동적으로 할당된 메모리를 해제
//    ~MyClass3() {
//        delete[] name;  // 동적으로 할당한 name 배열 메모리 해제
//    }
//
//    void setData(int l_id, const char* l_name, int l_age) { // 객체의 멤버 변수에 새로운 값 할당
//        id = l_id;  // id 갱신
//
//        delete[] name;  // 기존 name 메모리 해제
//
//        name = new char[strlen(l_name) + 1];    // 새로운 이름에 맞는 크기로 메모리 동적 할당
//        strcpy(name, l_name);   // 새로운 이름 문자열 복사
//
//        age = l_age;    // age 갱신
//    }
//
//    void getData() {
//        cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//    }
//
//};
//
//int main() {
//    MyClass3 obj(1, "김철수", 20); // MyClass3 객체 생성 및 초기화
//    obj.getData();
//
//    obj.setData(2, "김영희", 50);  // setData를 사용하여 객체의 데이터 변경
//    obj.getData();
//
//    return 0;
//}
// 
// 강사님
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	//char name[20];
//	char* name;
//	int age;
//public:
//	//MyClass() { }		// 디폴트 생성자
//	~MyClass() { delete[] name; }		// 소멸자(자동 호출된다. -동적할당경우 말고는 별도로 작성할 필요가 없다.)
//	MyClass(int _id, const char* _name, int _age);
//	void getData() const;
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {
//	id = _id;
//	age = _age;
//	name = new char[strlen(_name) + 1];		// 동적할당
//	//name = _name;		// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
//	strcpy(name, _name);
//}
//void MyClass::getData() const {				// 상수멤버 함수(모든 멤버 값들을 상수화 시킨다.)
//	cout << "id: " << id << ", name: " << name << ", age" << age << endl;
//	//id = 2;
//}
//int main()
//{
//	//MyClass obj;
//	//obj.setData(1, "김철수", 20);
//	//obg.getData();
//	MyClass obj(1, "김철수", 20);
//	obj.getData();
//
//	return 0;
//}