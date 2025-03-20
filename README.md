# iot-cpp-2025
# c++
## 1일차
- cout : 표준 출력 객체
    - std::cout 
        - C++에서  출력을 담당하는 표준 출력 스트림,
        우리가 원하는 데이터를 콘솔(터미널, 화면)에 출력할 때 사용
    - std::endl은 줄바꿈(개행) + 출력 버퍼(flush) 초기화
    ```c++
        std::cout << num << std::endl;
    ```
    - using namespace std;
        - C++에서는 표준 라이브러리의 기능(cout, cin, string...)이 std(standard)네임스페이스 안에 정의 되어있습니다.
        그래서 std::cout, std::cin처럼 std::를 붙여야하는데 이를 생략하기 위해 using namespace std;를 사용합니다.
        but 대규모 프로젝트에서는 비추천 -> 여러 네임스페이스를 사용할 때 혼란이 발생할 수 있다!

- cin : 입력을 담당하는 객체, C언어의 scanf()와 비슷한 역할
```c++
    #include <iostream>
    using namespace std;

    int main(){
        int inVal;
        cout<< "숫자 입력>> ";
        cin >> inVal;           // 키보드 입력을 받아 inVal 변수에 저장
        cout << "inVal: " << inVal << endl;

        return 0;
    }
```

* 함수의 다형성
    - 함수 오버로딩(함수의 다중정의) :  이름은 같은데 매개변수의 타입이나 갯수가 다르면 다른 함수이다.
    ```c++
        #include <iostream>
        using namespace std;

        int func(){             // 매개변수가 없는 func: 기본값 10 반환
            return 10;
        }
        
        int func(char c){       // char 타입 매개변수를 받아 해당 문자의 아스키코드 반환
            return c;
        }
        
        int func(int n){        // int 타입 하나를 받아 10과 더한 값 반환
            return 10 + n;
        }
    ```
    - 함수 오버라이딩(함수의 재정의)-->상속
- 디폴트 매개변수 : 함수를 호출할 때 인자를 생략할 경우에 대신 사용되는 기본 값을 미리 지정하는 기능
    [c++](./Day1/default.cpp)
    - 디폴트 매개변수를 여러개 적용할때는 맨 오른쪽부터 순서대로 작성한다.
    [c++](./Day1/default2.cpp)
    - 함수 오버로딩중 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때 입력없는 함수 호출시 문제가 발생한다.
    [c++](./Day1/default3.cpp)
- new 예제: [c++](./Day1/new.cpp)
- ref[c++](./Day1/ref.cpp)
st_c
[c++](./Day1/st_c.cpp)
[c++](./Day1/st_c2.cpp)
[c++](./Day1/st_c3.cpp)
pow - 제곱, 제곱근[c++](./Day1/)
프로그래밍 언어 순위

## 2일차
- class : 멤버 변수(private) + 멤버 함수(public) + 접근 제어 = 클래스 기본 구조
    - class를 구성하는 3가지
    1. 접근제어 지시자(private, public, protexted)
        - private : 클래스 내부에서만 접근 가능(외부에서 직접 접근 불가)
        - public : 어디서든 접근 가능
        - protected : 상속받은 클래스에서 접근 가능(외부에서는 접근 불가)
        - 멤버변수를 private로 설정하고, public 함수로 접근하는 방식 -> 캡슐화
    2. 멤버변수 - 속성, private 영역
        - 객체가 가지고 있는 데이터(속성)을 저장하는 변수
        - 보통 private로 선언하여 외부에서 직접 수정하지 못하도록 보호
        - public 함수(Setter, Getter)를 통해 접근 가능
    3. 멤버함수(메서드) - 기능, public 영역
        - 객체가 수행할 동작(기능)을 정의하는 함수
        - 보통 public으로 선언하여 외부에서 호출 가능
        - 멤버 변수를 조작하는 역할을 수행
    - setData() 함수로 private 멤버 변수 값 설정(세터 함수)
        - 클래스 객체의 상태를 외부에서 설정하는 역할
        - 외부에서 객체의 멤버 변수 값을 변경할 수 있게 해준다
    - getData() 함수로 private 멤버 변수 값 출력(게터 함수)
        - 객체의 상태를 외부로 반환하는 역할
        - 객체의 멤버 변수 값을 출력하거나 반환하는데 사용
    - 생성자(Constructor) : 클래스의 객체가 생성될 때 자동으로 호출되는 특수한 함수. 객체를 초기화 하는 역할을 하며, 보통 객체의 멤버 변수를 초기화하는 데 사용된다.
        - 특징:
        1. 자동 호출
        2. 반환 값 없음
        3. 클래스 이름과 동일
        4. 오버로딩 가능
        - 종류
        1. 기본 생성자
            - 매개변수가 없는 생성자
            - 객체 생성 시 멤버 변수들을 기본 값으로 초기화
        2. 매개변수가 있는 생성자
            - 객체 생성 시 매개 변수를 받아 멤버변수를 초기화 하는 생성자
    [c++](./Day2/class.cpp)
    [c++](./Day2/class2.cpp)
    [c++](./Day2/class3.cpp)

- Myclass 예제
    배열(문자열)에 = 로 다른 배열(문자열)을 대입 못함으로 문자열 처리를 활용하여 해줘야 함
    문자열 이름은 주소를 의미, 포인터 활용
[c++](./Day2/MyClass.cpp)
[c++](./Day2/MyClass2.cpp)
[c++](./Day2/MyClass3.cpp)
- 동적할당 : 메모리를 필요할 때 동적으로 할당하는 방식
    1. 실행 중 메모리 할당
        - 프로그램이 실행되는 동안에 필요한 만큼 메모리 할당 받을 수 있다.
        - 동적할당은 프로그램이 시작할 때 결정되지 않는 메모리 크기나 수량을 다룰 때 유용
    2. 메모리 해제 
        - 동적 할당된 메모리는 수동으로 메모리 해제 해야함
        delete나 delete[]를 사용하여 메모리 해제
        - 메모리를 해제하지 않으면 메모리 누수가 발생할 수 있다.
    - 동적 할당 방법
    1. new 연산자
        - 단일 객체 할당
        ```c++
            int* p = new int;   // int 타입의 단일 변수 동적 할당
            *p = 10;
        ```
        - 배열 할당
        ```c++
            int* arr = new int[10]; // int 타입 배열 10개 동적 할당
            arr[0] = 1; 
        ```
    2. delete 연산자(동적 할당된 메모리 해제)
        - 단일 객체 해제
        ```c++
            delete p;   // new로 할당한 단일 변수 p의 메모리 해제
        ```
        - 배열 해제
        ```c++
            delete[] arr;   // new로 할당한 배열의 메모리 해제
        ```
- 문자열 처리하기 : [c++](./Day2/문자열처리하기.cpp)
- 초기화
    - 변수 초기화 
        - 기본 초기화 : int a;       (지역변수는 쓰레기 값, 정적 변수는 0)
        - 복사 초기화 : int a = 10;  (= 을 사용한 초기화)
        - 직접 초기화 : int a(10);   ( 함수 호출 형태로 초기화)
        - 중괄호 초기화 : int a{10}; (타입 변환 방지, 안전한 초기화) -> 타입 안정성을 높이고, 실수 방지하는 데 유용하다!
        - 기본값 초기화 : int a{};   (0으로 초기화 됨)
        - 동적 초기화 : new int(10); (힙 메모리 할당 시 초기화 가능)
    - 콜론 초기화 : 생성자에서 멤버 변수를 생성과 동시에 초기화 하는 방법
        - 이니셜라이저 리스트를 사용할 때 사용, :(콜론) 뒤에 초기화 할 멤버 변수를 나열하는 방식
        - 콜론 초기화 필수 : const, 참조형 멤버는 반드시 콜론 초기화 사용
        ```c++
            class Test{
            private:
                const int value; 
                int& ref;
            public:
                Test(int v, int& r) : value(v), ref(r) {}   // 콜론 초기화 필수 
            };
        ```
        - 클래스 객체 초기화 : 포함된 클래스 객체의 기본 생성자 호출 방지
        ```c++
            B(int num) : a(num) {}  // A 객체를 num으로 직접 초기화
        ```
    	멤버 초기화
	1. 상수 멤버 변수의 초기화
	2. 참조 멤버 변수의 초기화
	3. 객체를 멤버로 가지는 경우
[c++](./Day2/init.cpp)
[c++](./Day2/init2.cpp)
[c++](./Day2/init3.cpp)
[c++](./Day2/init4.cpp)
- Human 예제 : [c++](./Day2/Human.cpp) - 주석 달기


## 3일차
- 복사생성자(copyconstructor) : 이미 존재하는 객체를 기반으로 새로운 객체를 생성하는 생성자.
    - 기본 복사 생성자는 얕은 복사 수행, 동적할당된 데이터가 있을 경우 깊은 복사를 위해 직접 정의해야 함
    - 동적 메모리를 사용하는 클래스에서는 반드시 복사 생성자를 정의하여 메모리 문제를 방지해야 함
```c++
    class ClassName{
    public:
        ClassName(const ClassName& other){
            // 복사할 멤버 변수 초기화
        }
    }
```
[C++](./Day3/copyconstor.cpp)
[C++](./Day3/copyconstor2.cpp)
[C++](./Day3/copyconstor3.cpp)
- 변환생성자 : 단일 매개변수를 가지며, 한 타입의 값을 자동으로 객체로 변환할 수 있도록 하는 생성자.
    - 암시적 변환
        - 변환 생성자는 객체를 명시적으로 생성하지 않아도 자동으로 호출됨
        - 객체를 직접 생성하지 않고도 변환 가능
    - 명시적 변환을 위한 explicit 키워드
        - 변환 생성자는 원하지 않는 암시적 변환이 발생할 위험이 있다
        이를 방지하려면 explicit키워드를 사용하여 명시적으로만 변환 가능하도록 설정할 수 있다.
```c++
    class ClassName{
    public:
        ClassName(otherType value){
            // 변환 로직
        }
    }
```
[c++](./Day3/변환생성자.cpp)
[c++](./Day3/변환생성자2.cpp)
[c++](./Day3/변환생성자3.cpp)

- 이동 생성자(moveconstructor) : 임시 객체를 효율적으로 다른 객체로 이동시키는 특별한 생성자
불필요한 복사를 방지하고 기존 데이터를 빠르게 ``이동``하는 것
    1. r-value 참조(ClassName&&)를 매개변수로 받음
    2. 기존 객체 데이터를 새로운 객체로 이동하고, 기존 객체를 비움(nullptr 할당)
    3. std::move()를 사용하면 l-value도 r-value처럼 이동할 수 있음
    4. 메모리 중복해제를 방지하기 위해 기존 객체를 비워야함
    5. 복사보다 훨씬 빠르게 객체를 생성할 수 있음
```c++
    class ClassName{
    public:
        ClassName(ClassName&& other) noexcept{
            // 자원 이동(복사x)
        }
    }
```
[c++](./Day3/moveCon.cpp)
[c++](./Day3/moveCon2.cpp)