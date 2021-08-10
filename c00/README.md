# Exercise 00: Megaphone
조건|내용
--|--
Turn-in directory | ex00
Files to turn in |Makefile, megaphone.cpp
Forbidden functions |None
---
```bash
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```
# Exercise 01: My Awesome PhoneBook - 동적 할당 없는 클래스 사용 및 iomanip 연습
조건|내용
--|--
Turn-in directory | ex01/
Files to turn in | Makefile, *.cpp, *.{h, hpp}
Forbidden functions | None
---
- 형편없는 전화번호부 소프트웨어처럼 동작하는 프로그램을 작성
- 잠시 시간을 내어 실행 파일에 관련 이름을 지정
- 프로그램이 시작되면 사용자에게 ADD 명령, SEARCH 명령 또는 exit 명령을 수락하라는 메시지가 표시
- 다른 입력은 삭제
- 프로그램이 비어 있고(연락처가 없음), 동적 할당을 사용하지 않으며 8개 이상의 연락처를 저장할 수 없습니다.
- 아홉 번째 연락처가 추가되면 가장 오래된 연락처를 교체
---
명령|내용
|--|--|
EXIT| 프로그램이 종료되고 연락처가 사라짐
ADD| 모든 필드가 설명될 때까지 사용자에게 한 번에 하나의 필드씩 새 연락처 정보를 입력하라는 메시지가 표시됩니다.
〃|연락처는 이름, 성, nickname, 전화번호, darkest secret로 구성
〃|PhoneBook은 코드에서 클래스의 인스턴스로 표시되어야 하며 연락처 배열을 포함해야 합니다.
〃|연락처는 코드에서 클래스의 인스턴스로 표시되어야 합니다. 클래스를 원하는 대로 디자인할 수는 있지만 동료 평가에서는 선택한 항목의 일관성을 확인합니다.
SEARCH | index, 이름, 성, 닉네임 등 4개 열에 비어있지 않은 연락처 목록을 표시한다.
〃| 각 열은 너비 10자, 오른쪽 정렬 및 '&verbar;' 문자로 구분되어야 합니다.열의 너비보다 긴 출력은 잘리고 마지막 표시 가능 문자는 점('.')으로 대체됩니다.
〃|원하는 항목의 인덱스를 요청하고 연락처 정보를 한 줄에 하나씩 표시합니다.
〃|입력을 사용할 수 없는 경우 관련 동작을 정의합니다.
---

- iomanip는 io스트림 너비, 정밀도 등을 수정해주는 함수들이 들어있음. 열 너비 맞춰 쓸 때 setw를 썼다.

# Exercise 02: The Job Of Your Dreams #

- 누락된 소스 파일 하나를 다시 코딩해야 합니다
- Account.cpp가 누락되었으며 git가 아닌 USB 파일 공유를 사용합니다.
- Account.cpp 파일이 누락되었음을 확인합니다.
- 일치하는 출력을 포함하는 것으로 보이는 이전 출력 로그도 있습니다.
- 따라서 Account.cpp 파일을 만들고 C++의 몇 줄을 빠르게 작성해야 합니다. 몇 번의 컴파일 실패 후 프로그램은 타임스탬프 차이를 제외하고 완벽한 출력으로 컴파일하여 테스트를 통과합니다.

//-std=c++98 