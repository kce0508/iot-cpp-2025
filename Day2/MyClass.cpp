/*
	배열(문자열)에 = 로 다른 배열(문자열)을 대입 못함으로 문자열 처리를 활용하여 해줘야함
	문자열 이름은 주소를 의미, 포인터 활용
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char name[20];      // 학생 이름을 저장하는 문자 배열
//    int age;
//public:
//    void setData(int c_id, const char* c_name, int c_age) {
//        id = c_id;
//        strcpy(name, c_name);   // 문자열 복사(c_name의 내용을 name 배열에 저장)
//        age = c_age;
//    }
//
//    void getData() {
//        cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//    }
//};
//
//int main() {
//    MyClass obj;
//    obj.setData(1, "김철수", 20);
//    obj.getData();
//
//    return 0;
//}