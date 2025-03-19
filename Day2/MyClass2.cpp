/*
	배열(문자열)에 = 로 다른 배열(문자열)을 대입 못함으로 문자열 처리를 활용하여 해줘야함
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class MyClass2 {
//private:
//    int id;
//    char name[20];          // 학생 이름을 저장하는 배열
//    int age;
//public:
// 
//    MyClass2(int c_id, const char* c_name, int c_age) { 
//        id = c_id;
//        strcpy(name, c_name);   // 문자열 복사(c_name의 내용을 name 배열에 저장)
//        age = c_age;
//    }
//    void setData(int l_id, char l_name[], int l_age) {
//        id = l_id;
//        strcpy(name, l_name);   // 문자열 복사(l_name의 내용을 name 배열에 저장
//        age = l_age;
//
//    }
//    void getData() {
//        cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//    }
//
//};
//
//int main() {
//
//    MyClass2 obj(1, "김철수", 20);
//    obj.getData();
//
//    return 0;
//}