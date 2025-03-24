/*
	protected 접근제어는 상속 받은 자식클래스에서 접근 가능
*/

//#include <iostream>
//using namespace std;
//	// 부모 클래스
//class Human {
//protected: 
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
// // 자식 클래스
//class Student : public Human{
//private:
//	int studentID;
//public:
//	Student(const char* name, int age, int studentID);
//	void showStudent();
//};
// // Human 클래스의 생성자 정의
//Human::Human(const char* aname, int aage) {
//	strcpy_s(name, aname);
//	age = aage;
//}
// // 사람 정보 출력
//void Human::getData() {
//	cout << "이름: " << name << ", 나이: " << age << endl;
//}
// // 부모클래스의 생성자를 호출하여 name과 age를 초기화
//Student::Student(const char* aname, int aage, int astudentID) :Human(aname, aage) {
//	studentID = astudentID;
//}
// // 학생 정보 출력
//void Student::showStudent() {
//	cout << "이름: " << name << ", 나이: " << age;
//	cout << ", 학번: " << studentID << endl;
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