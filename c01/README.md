# C01 #

# Exercise 00: BraiiiiiiinnnzzzZ #

조건|내용
--|--
Turn-in directory | ex00
Files to turn in | Makefile, main.cpp, Zombie.cpp, Zombie.hpp, newZombie.cpp, randomChump.cpp
Forbidden functions |None
---

1. Zombie class생성, 좀비들은 private name을 가진다. announce는 다음과 같은 것을  할 수있다.
    - `<name> BraiiiiiiinnnzzzZ...`
2. announce(void)는 멤버 함수다. 또한, 좀비의 이름을 포함한 하나의 디버깅 메세지를 파괴자에 추가해라
3. 이후 , 하나의 좀비를 만들고 좀비를 반환시켜주는 함수를 만들어라(어디서든 사용가능한) 
함수의 프로토타입 : `Zombie* newZombie( std::string name );`
4. 또한, 좀비를 만들고 좀비가 스스로 announce하는 함수를 만들어라
함수의 프로토타입 : `void randomChump( std::string name );`

## Point ##
- 좀비들은 적절한 시기(더이상 필요없을 때)에 파괴되어야한다.
- 좀비들은 쓰임에 따라 힙 또는 스택에 할당될것이다.
- 힙이 더나은 경우도 있고 스택이 더 나은 경우도 있다.

# Exercise 01: Moar brainz! #

조건|내용
--|--
Turn-in directory | ex01
Files to turn in | Makefile, main.cpp, Zombie.cpp, Zombie hpp, ZombieHorde.cpp
Forbidden functions | None
---
1. 좀비클래스를 재사용하여 좀비무리를 만들예정이다.
2. 정수 N을 갖는 함수를 만들어라
3. 호출되었을 때 N명의 Zombie객체들을 할당한다.
4. It must allocate all the N Zombie objects in a single allocation
5. 그런다음 함수는 각각의 좀비를 다른이름으로 초기화 시킨다.
6. 마지막으로, 함수는 첫번째 좀비포인터를 반환
7. 함수의 프로토타입 : `Zombie* zombieHorde( int N, std::string name );`
8. 좀비 각각에 대한 announce()를 호출함

# Exercise 02: HI THIS IS BRAIN #

조건|내용
--|--
Turn-in directory | ex02
Files to turn in | Makefile, main.cpp
Forbidden functions | None
---

1. `"HI THIS IS BRAIN"`을 포함하는 string만들기
2. string에 관하여 포인터변수와 참조형변수 만들기
3. string메모리의 주소와 stringPTR, stringREF를 사용하여 string 메모리주소를 출력
4. 마지막으로 포인터와 참조를 사용하여 string출력

# Exercise 03: Unnecessary violence #

조건|내용
--|--
Turn-in directory | ex03
Files to turn in | Makefile, main.cpp, Weapon.cpp, Weapon.hpp, HumanA.cpp, HumanA.hpp, HumanB.cpp, HumanB.hpp
Forbidden functions | None
---

1. Weapon 클래스는 하나의 type string , 하나의 상수참조형 getType method(type리턴)물론 setType도 가지고있다
2. HumanA, HumanB 클래스는 하나의 Weapon, 하나의 name, 하나의 attack()함수를 가지고있다.
3. attack() => `NAME attacks with his WEAPON_TYPE`
4. HumanA는 무기를 생성자 함수에 매개변수로 사용하지만 HumanB는 그렇지 않다.
5. HumanB가 항상 무기를 가지고 있는 것은 아니지만 HumanA는 항상 무기를 가지고 있을 것이다.

- 포인터 대신 참조를 사용한 이유??
    - 참조자는 변수를 입력받기 때문에 직관적으로 이해하기 쉽고,
    - 한번 지정한 객체는 변경할 수 없기 때문에 안전성이 높다.
```c++
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}
```
---
# Exercise 04: Sed is for losers #

조건|내용
--|--
Turn-in directory | ex04
Files to turn in | Makefile, main.cpp, and whatever else you need
Forbidden functions | None
---

1. s1, s2, filename을 인자로 받는 replace생성, 단 s1,s2는 비어있지않다.
2. file을 open하면 파일의 내용들이 filename.replace로 생성 그리고 s1문자열이 s2문자열로 치환
3. std::string클래스의 모든 멤버함수 사용가능
4. 할 수있는만큼 에러처리(자율적)
5. 테스트 파일만들기

### find() 메소드
- find() 메소드는 특정 문자열을 찾아, 그 시작 위치를 반환하는 메소드입니다.
- find() 메소드를 위한 원형은 다음과 같습니다.


1. 문자열.find(찾을문자열) // 인덱스 0부터 찾을 문자열을 찾아, 그 시작 위치를 반환함.

2. 문자열.find(찾을문자);             // 인덱스 0부터 찾을 문자를 찾아, 그 시작 위치를 반환함.

3. 문자열.find(찾을문자열, 시작위치); // 시작 위치부터 찾을 문자열을 찾아, 그 시작 위치를 반환함.

 - find() 메소드는 해당 문자열에서 찾을 문자열을 찾지 못하면, string::size_type의 string::npos라는 상수를 반환합니다.

---

# Exercise 05: Karen 2.0 #

조건|내용
--|--
Turn-in directory | ex05
Files to turn in | Makefile, Karen.cpp , Karen.hpp, main.cpp
Forbidden functions | None
---

1. "DEBUG" level : 이 수준의 메시지에는 광범위한 상황별 정보가 포함되어 있습니다. 대부분 문제 진단에 사용됩니다.
`Example: "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"`
2. "INFO" level : 이러한 메시지에는 운영 환경의 실행을 추적하는 데 도움이 되는 몇 가지 상황별 정보가 포함되어 있습니다. 
`Example: "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!"`
3. "WARNING" level : 경고 메시지는 시스템에 잠재적인 문제가 있음을 나타냅니다.
시스템이 자체적으로 문제를 처리하거나 이 문제를 여러 방법으로 처리할 수 있습니다.`Example: "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month."`
4. "ERROR" level : 오류 메시지는 시스템에 심각한 문제가 있음을 나타냅니다. 이 문제는 일반적으로 복구할 수 없으며 수동 개입이 필요합니다.`Example:"This is unacceptable, I want to speak to the manager now."`

5. Karen클래스를 만들고 private에 다음과 같은 멤버함수 생성 
- void debug( void );
- void info( void );
- void warning( void );
- void error( void );

6. 또한, 매개변수로 전달되는 level에 따라 private에 존재하는 함수를 실행시키는 public멤버함수를 만들어라
- void complain( std::string level );

7. 이 문제의 목적은 멤버함수에 포인터를 사용하는데 있다.
---
# Exercise 06: Karen-filter #

조건|내용
--|--
Turn-in directory | ex06
Files to turn in | Makefile, Karen.cpp , Karen.hpp, main.cpp
Forbidden functions | None
---

1. 카렌이 하는 말을 걸러내는 시스템을 시행할 것이다.
2. 하나의 매개변수를 받는 karenFilter 프로그램을 작성할 것이다. at this level or above it (상위레벨을 보여주라는 소리인듯)
```zsh
$> ./karenFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I’ve been coming here for years an you just started working here last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./karenFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```
