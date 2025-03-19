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

pow - 제곱, 제곱근
프로그래밍 언어 순위

## 2일차
- class
    - class를 구성하는 3가지
    1. 접근제어 지시자(private, public, protexted)
    2. 멤버변수 - 속성, private 영역
    3. 멤버함수(메서드) - 기능, public 영역
- 객체
[c++]
- Myclass 예제
[c++](./Day2/MyClass.cpp)
[c++](./Day2/MyClass2.cpp)
[c++](./Day2/MyClass3.cpp)

