## General rules
- 헤더에 구현된 모든 기능(템플릿의 경우 제외) 및 비보호 헤더는 연습에 0을 의미합니다.
- 모든 출력은 표준 출력이고 달리 지정하지 않는 한 개행으로 끝납니다.
- 부여된 파일 이름은 클래스 이름, 함수 이름 및 메서드 이름뿐만 아니라 문자 뒤에 와야 합니다.
- Remember
    - 다음 기능은 금지되어 있으며 사용 시 0점 처리 : *alloc, *printf and free
    - 표준라이브러리에 있는 것들은 사용가능
    - C 대신에 C++ 사용하기
    - 모듈 08전까지 STL(standard template library, 표준 템플릿 라이브러리)사용 금지
    - 즉, 벡터/리스트/맵 등등 알고리즘을 포함한 그 어떤것도 사용금지
- 명시되지 않는 한 C++ keyword "using namespace", "friend" 는 사용금지
- 클래스와 연결된 파일은 달리 지정되지 않는 한 항상 ClassName.hpp 및 ClassName.cpp
- 컴파일러는 c++ , -Wall -Wextra -Werror
---
- `C 표준 입출력 함수와 C++ 표준 입출력 객체와의 차이점`
    - 삽입 연산자(<<)와 추출 연산자(>>)가 데이터의 흐름을 나타내므로 좀 더 직관적
    - C++ 표준 입출력 객체는 입출력 데이터의 타입을 자동으로 변환시켜주므로 더욱 편리하고 안전
---
- `cout 객체`
    - cout 객체는 다양한 데이터를 출력하는 데 사용되는 C++에서 미리 정의된 출력 스트림을 나타내는 객체
    - std::cout << 출력할데이터;
```c++
#include <iostream>

int main()
{
	std::cout << "C++ 수업에 오신 것을 환영합니다!";
	return 0;
}
```
- `cin 객체`
    - cin 객체는 다양한 데이터를 입력받는 데 사용되는 C++에서 미리 정의된 입력 스트림을 나타내는 객체
    - std::cin >> 저장할변수;
    - 이때 cin 객체는 자동으로 사용자가 입력한 데이터를 오른쪽에 위치한 변수의 타입과 동일하게 변환
    - 만약에 문자열을 입력하면 cin 객체는 변수 age에 숫자가 아니라는 의미인 0을 전달
```c++
#include <iostream>
int main()
{
    int age;

    std::cout << "여러분의 나이를 입력해 주세요 : ";
    std::cin >> age;

    std::cout << "여러분의 나이는 " << age << "살 입니다." << std::endl;
    return 0;
}
```
---

