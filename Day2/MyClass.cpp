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
//    void setData(int c_id, const char* c_name, int c_age) {     // setData 함수: 학생의 정보를 입력받아 멤버 변수에 저장
//        id = c_id;              // id에 c_id 값을 저장
//        strcpy(name, c_name);   // 문자열 복사(c_name의 내용을 name 배열에 저장)
//        age = c_age;            // age에 c_age 값을 저장
//    }
//
//    void getData() {            // getData 함수: 학생 정보를 출력
//        cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//    }
//};
//
//int main() {
//    MyClass obj;    // MyClass 객체 obj 생성
//    obj.setData(1, "김철수", 20);  // setData 함수 호출하여 데이터 설정
//    obj.getData();  // getData 함수 호출하여 데이터 출력
//
//    return 0;
//}