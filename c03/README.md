### Topic ### 
#### Inheritance ####

---
### 상속
```c++
class ClapTrap // 부모 클래스
{
protected: // 접근 지시자 

public:
};

class FragTrap : public ClapTrap // 자식 클래스
{
};
```
#### 접근지시자 특징
- 기본적으로 private 성격을 유지하면서 자식 클래스에서의 접근만을 허용해준다.
- 자식클래스에서 중복되는 멤버함수나 변수를 부모클래스에 작성할 수 있기때문에 메모리 절약, 코드의 효율이 좋아짐.
---
### 부모(기초)클래스 && 자식(파생)클래스 생성 ###
#### 자식 클래스 생성시 순서
1. 부모 클래스 생성자 호출 및 멤버 변수 초기화
2. 자식 클래스 생성자 호출

#### 소멸시 순서
1. 자식 클래스 소멸자 호출
2. 부모 클래스 소멸자 호출

---
### 다중상속
- 쉽게 생각하면 헤더파일중복방지를 위해서 #ifndef를 하는 것처럼 virtual 키워드 사용.
```c++
class ClapTrap // 부모 클래스
{
protected: // 접근 지시자

public:
};

class FragTrap : virtual public ClapTrap
{
};

class ScavTrap : virtual public ClapTrap
{  
};

class DiamondTrap : public FragTrap, public ScavTrap // 파생 클래스
{
};
```
___
### FLAG
1. Wshadow : 지역변수가 다른 지역변수, 매개변수 등(shadow) 덮는 경우 Warning이 발생합니다.