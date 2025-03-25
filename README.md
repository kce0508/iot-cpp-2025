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
- 클래스 내부의 static 멤버 변수
    - 객체에 속하지 않고, 클래스 자체에 속함
    - 모든 객체가 같은 static 변수 값을 공유함
    - 객체 없이도 클래스명::변수명으로 접근 가능
    - 반드시 클래스 외부에서 정의해야함
- 클래스 내부의 static 멤버 함수
    - static 멤버 함수는 객체 없이 호출 가능(클래스명::함수명())
    - static 변수만 접근 가능(일반 멤버 변수는 접근 불가능)
[c++](./Day3/static.cpp)
[c++](./Day3/static2.cpp)
- static 예제 : [c++](./Day3/static3.cpp)
- 연산자 오버로딩(Operator Overloading) : c++에서 기존 연산자를 사용자 정의 클래스에서도 사용할 수 있도록 기능을 확장하는 기법
[c++](./Day3/operator.cpp)
[c++](./Day3/operator2.cpp)

## 4일차
- 연산자 오버로딩
    1. 멤버 함수로 오버로딩
    2. 프렌드 함수로 오버로딩
    3. 다양한 연산자 오버로딩 예제
    (1) == 연산자 오버로딩
    (2) << 연산자 (출력) 오버로딩
    (3) ++ 연산자 오버로딩(전위, 후위)
[c++](./Day4/operator.cpp)
[c++](./Day4/operator2.cpp)
[c++](./Day4/operator3.cpp)

4일차 정리하기

## 5일차

- 상속(Inheritance) : 기존 클래스의 기능을 확장하여 새로운 클래스를 만드는 것
is a( 무엇은 무엇이다.) 관계, has a(소유) 관계가 성립해야 한다.
    - 기본적인 상속 문법
    ```c++
        class 부모클래스 {
            // 멤버변수와 멤버함수
        };
        class 자식클래스 : public 부모클래스 {
            // 부모클래스의 속성과 기능을 상속받음
        };
    ```
    - public 상속(일반적인 상속) : 부모클래스의 기능을 그대로 유지할 수 있어서 가장 일반적으로 사용됨.
    - protected 상속 : 부모 클래스의 protected 멤버와 public 멤버를 자식 클래스에서 접근할 수 있도록 허용하지만, 외부에서 접근할 수는 없습니다.
    주로 자식 클래스에서만 특정 기능을 사용할 수 있도록 하여 부모클래스의 구현을 숨기는 데 유용하게 사용됨.
    - private 상속
    - 생성자는 부모->자식 순서로 호출되고,
      소멸자는 자식->부모 순서로 호출됨
    - 상속관계에서 이니셜라이즈 사용하기
        - 자식 클래스의 생성자가 부모클래스의 멤버를 초기화 하는 과정
        1. 부모 클래스 생성자 호출
        2. 초기화리스트(Initializer List)
            - 자식 클래스 생성자에서 부모 클래스 생성자를 호출할 때 초기화 리스트(: 부모클래스 생성자())를 사용
    - 객체 생성 
        - 흐름
        1. 자식 클래스의 생성자가 호출된다.
        2. 자식 클래스의 생성자에서 부모 클래스 생성자가 호출된다.
        3. 부모 클래스의 멤버가 초기화되고, 자식 클래스의 멤버가 초기화 된다.
    - 객체 소멸
        - 흐름
        1. 자식 클래스의 소멸자가 먼저 호출된다.
        2. 자식 클래스의 멤버가 소멸된다.
        3. 부모 클래스의 소멸자가 호출된다.
        4. 부모 클래스의 멤버가 소멸된다.
[c++](./Day5/inheritance.cpp)
[c++](./Day5/inheritance2.cpp)
[c++](./Day5/inheritance3.cpp)
[c++](./Day5/inheritance4.cpp)

- 객체 포인터 : 객체를 가리키는 포인터
    동적 메모리 할당 및 다형성을 다룰때 유용하게 사용
    1. 객체 포인터의 선언과 사용
    - 객체 타입 뒤에 * 기호를 붙여야함
    2. 객체 포인터와 동적 메모리 할당
    - new 연산자를 사용하면 동적으로 객체를 생성하고, 객체 포인터를 통해 객체를 관리할 수 있다.
    ```c++
        
    int main() {
        // 동적 객체 생성
        MyClass* ptr = new MyClass(30);

        // 동적 객체의 멤버에 접근
        ptr->show();

        // 동적으로 할당된 메모리 해제
        delete ptr;

        return 0;
    }
    ```
    3. 객체 포인터와 상속
    ```c++
        
    int main() {
        Base* ptr;  // 부모 클래스 타입의 포인터 선언

        Derived obj;  // 자식 클래스 객체 생성
        ptr = &obj;  // 부모 클래스 포인터가 자식 클래스 객체를 가리킨다 (Upcasting)

        // 다형성: 부모 클래스 포인터로 자식 클래스 함수 호출
        ptr->show();

    return 0;
    }

    ```
- 상속에서 객체 포인터
    1. 업캐스팅 - 부모 클래스 포인터로 자식 클래스 객체 가리키기(Upcasting)
    2. 다운캐스팅 - 부모 클래스 타입의 포인터를 자식 클래스 타입의 포인터로 변환(Downcasting)

[c++](./Day5/objPointer.cpp)
[c++](./Day5/objPointer2.cpp)
[c++](./Day5/objPointer3.cpp)
[c++](./Day5/objPointer4.cpp)
[c++](./Day5/objPointer5.cpp)
[c++](./Day5/objPointer6.cpp)

- 가상 함수(virtual function) : 파생 클래스에서 재정의할 것을 약속 받은 멤버함수를 말하며 Base클래스의 멤버 함수에 virtual 키워드를 사용하여 만든다.
virtual table이 만들어지고 , dynamic binding 으로 동작한다.
[c++](./Day5/virtual.cpp)

- virtual class - 순수 지정자를 가지는 메서드를 순수 가상함수라고 하며, 이 순수 가상함수를 가지는 클래스
추상 클래스는 객체를 생성할 수 없다.
[c++](./Day5/virtual2.cpp)

- 추상 자료형을 이용해서 동적할당된 객체를 참조할때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생.
따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자 호출을 유도한다.
[c++](./Day5/virtual3.cpp)

- static_cast(명시적 형 변환): 컴파일 타임에서 변환을 수행하는 캐스트 연산자
    ```c++
        static_cast<변환할_타입>(변환할_값);
    ```
[c++](./Day5/static_cast.cpp)
[c++](./Day5/static_cast2.cpp)

## 6일차
- dynamic_cast
    기본 클래스를 참조하는 value를 파생된 클래스에 대한 참조로 변환
상속관계에서 안전하게 형변환을 지원한다. 업캐스팅
다운캐스팅 경우는 다형성을 위해서 virtual 메서드가 꼭 있어야 한다.
dynamic_cast를 이용하여 다운캐스팅 경우는 가상함수가 있어야 한다.
[c++](./Day6/dynamic_cast.cpp)
[c++](./Day6/dynamic_cast2.cpp)

- const_cast
    - 상수성을 제거하거나 추가하는 데 사용되는 타입 캐스팅 연산자
    ```c++
        const_cast<new_type>(expression)
    ```
[c++](./Day6/const_cast.cpp)
[c++](./Day6/const_cast2.cpp)


[c++](./Day6/reinterpret.cpp)

- 임시 객체(temporary dobject) : 특정 표현식에서 일시적으로 생성되었다가, 해당 표현식이 끝나면 바로 소멸하는 객체를 말함.
명확한 변수에 할당되지 않으면, 표현식이 끝나면서
```c++
    MyClass{ 30 };  // 임시 객체
```
[c++](./Day6/tempobj.cpp)
[c++](./Day6/tempobj2.cpp)
[c++](./Day6/tempobj3.cpp)

- 단독 소유 스마트 포인터(unique_ptr)
    - 단독 소유:
        - 같은 객체를 여러 개의 unique_ptr이 소유할 수 없음
        - 복사가 불가능하며, std::move()를 통해 소유권을 이동해야 함.
    - 자동 매모리 해제
        - unique_ptr이 범위를 벗어나면 자동으로 객체 소멸
    - 메모리 누수 방지
        - new와 delete를 직접 사용할 필요 없이 메모리 관리 가능

    ```c++
    #include <iostream>

    class MyClass {
    public:
        MyClass() { std::cout << "MyClass 생성" << std::endl; }
        ~MyClass() { std::cout << "MyClass 소멸" << std::endl; }
    };

    int main() {
        std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>(); // 객체 생성

    // ptr1이 범위를 벗어나면 자동으로 메모리 해제됨
        return 0;
    }
    ```
[c++](./Day6/unique_ptr.cpp)

- 공유 소유 스마트 포인터(shared_ptr) : 여러개의 포인터가 같은 객체를 공유할 수 있는 공유 소유 스마트 포인터
    - 공유 소유
        - 여러 개의 shared_ptr이 동일한 객체를 공유할 수 있음
        - 객체를 참조하는 shared_ptr의 개수를 참조 카운트로 관리
        - 마지막 shared_ptr이 소멸될 때 객체가 자동 해제됨
    - 자동 메모리 관리
        - shared_ptr이 범위를 벗어나거나 nullptr로 설정되면 참조 카운트가 감소
        - 참조 카운트가 0이되면 객체가 자동으로 삭제됨
    - 복사 가능하지만, 성능 오버헤드 발생
        - unique_ptr보다 약간 더 무겁고 느릴 수 있다.
    - 순환참조 문제 주의 : weak_ptr 사용
    ```c++
    #include <iostream>

    class MyClass {
    public:
        MyClass() { std::cout << "MyClass 생성" << std::endl; }
        ~MyClass() { std::cout << "MyClass 소멸" << std::endl; }
        void func() { std::cout << "shared_ptr 사용 중!" << std::endl; }
    };

    int main() {
        // std::make_shared를 사용하여 객체 생성 (C++11 이상)
        std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();

        // ptr2는 ptr1과 동일한 객체를 공유 (참조 카운트 증가)
        std::shared_ptr<MyClass> ptr2 = ptr1;

        std::cout << "참조 카운트: " << ptr1.use_count() << std::endl;

        ptr2->func(); // 공유된 객체 사용

        return 0; // 프로그램 종료 시, 마지막 shared_ptr이 소멸되면서 객체가 삭제됨
    }
    ```
[c++](./Day6/shared_ptr.cpp)

- weak_ptr
    - 객체를 소유하지 않고 shared_ptr이 관리하는 객체를 참조 가능
    - 참조 카운트 증가 없이 객체를 참조하여 순환참조 문제를 방지
    - expired()와 lock()을 이용해 객체가 아직 존재하는지 안전하게 확인 가능
[c++](./Day6/weak_ptr.cpp)
[c++](./Day6/weak_ptr2.cpp)


- STL(Standard Template Library)
- container: 객체를 저장하고 관리하는 자료구조
- 컨테이너 종류
1. 시퀀스 컨테이너 - 선형적으로 데이터 저장(순서), vector, list, queue
2. 연관 컨테이너 - 일정한 규칙으로 저장, set, multicast, 
3. 컨테이너 어댑터 - 변형

- vector
    vector.size(): 원소 크기(갯수)를 반환
    vector.begin(): 첫번째 주소를 반환
    vector.end(): 마지막의 다음 주소를 반환
    v.push_pack(10): 마지막 원소 뒤에 10을 추가한다.
    v.insert(idx, val): idx번째 위치에 val을 넣는다.
    v.capacity(): 벡터에 할당된 메모리 크기를 리턴한다.	- v.size()
[c++](./STL/vector.cpp)
[c++](./STL/vector2.cpp)