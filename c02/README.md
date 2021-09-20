# Bonus Rules #
##### <  이제부터 당신의 클래스에 포함되어야 하는 것들 : `최소한 하나의 default 생성자, copy 생성자, 할당 연산자 오버로드, 그리고 파괴자`> #####

# Exercise 00: My First Orthodox Class #

| 조건 | 내용 |
--|--
Turn-in directory | ex00/
Files to turn in | Makefile, main.cpp, Fixed.hpp and Fixed.cpp
Forbidden functions | None

- 정수 및 부동 소수점 표현에 대해서 알아야 한다.
- 이제껏 당신이 사용해온 것은 정수 또는 부동 소수점 번호이다.
- 정수와 부동 소수점은 서로 반대되는 특징들을 가지고 있다.
- 지금부터 고정소수점이라는 어썸한 숫자타입을 사용할 것이다.
---
- 상수 멤버 함수에서 멤버 변수 값을 바꾸는 행위를 할 수 없다.
- 상수 멤버 함수 안에서 비-상수 멤버 함수를 호출할 수 없다.
- 상수 클래스 객체에 대해서도 호출할 수 있다.
---
### Private members : 
- An integer to store the fixed point value.(고정값?을 저장할 하나의 정수)
- A static constant integer to store the number of fractional bits.(분수 비트수를 저장할 하나의 정적 상수 정수)

### Public members :
- A default constructor that initializes the fixed point value to 0.(고정값을 0으로 초기화 시킬 생성자)
- 하나의 파괴자
- 하나의 복사 생성자(http://tcpschool.com/cpp/cpp_conDestructor_copyConstructor)
- 하나의 할당연산자오버로드
- 멤버함수 -> int getRawBits( void ) const;(`Returns the raw value of the fixed point value`)
- void setRawBits( int const raw ); (`Sets the raw
value of the fixed point value`)
---

# Exercise 01: Towards a more useful fixed point class

| 조건 | 내용 |
--|--
Turn-in directory | ex01/
Files to turn in | Makefile, main.cpp, Fixed.hpp and Fixed.cpp
Allowed functions | roundf (from `<cmath>`)

