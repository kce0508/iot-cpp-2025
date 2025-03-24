/*
	Inheritance(상속)
	private, public, protected
	is a(무엇은 무엇이다.) 관계, has a(소유) 관계가 성립해야 한다.
*/ 

//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Human	{						// 부모 클래스, 기초 클래스, 슈퍼클래스, 베이스 클래스
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);		// 생성자 선언(이름과 나이를 초기화)
//	void getData();
//};
//class Student : public Human {		// 자식 클래스, 파생 클래스, 서브 클래스, 드라이버드 클래스
//private:
//	int studentID;					// 학번 저장 변수
//public:
//	Student(const char* name, int age, int studentID);
//	void showStudent();
//};
//Human::Human(const char* aname, int aage) {		// Human 클래스의 생성자 정의
//	strcpy_s(name, aname);
//	age = aage;
//}
//void Human::getData() {		// 사람 정보 출력
//	cout << "이름: " << name << "나이: " << age << endl;
//}
///* 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다. */
//Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {	// 부모 클래스 생성자 호출
//	//strcpy(name, aname);
//	//age = aage;
//	studentID = astudentID;
//}
//void Student::showStudent() {
//	//cout << "이름: " << name << endl;
//	cout << "학번: " << studentID << endl;
//}
//int main()
//{
//	Human h("홍길동", 25);
//	h.getData();
//
//	Student h2{ "임꺽정", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//
//	return 0;
//}