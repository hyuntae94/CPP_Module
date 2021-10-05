# ex00
1. 각각의 클래스의 생성자와 소멸자를 생성
2. 최상위 부모클래스의 이름은 Animal 클래스
3. protected에는 `std::string type;` 생성(type에는 공백 또는 임의의값 생성)
4. Animal클래스를 상속받는 Dog, Cat생성
5. Dog클래스 type은 "Dog"로 초기화시켜줘야함.
6. 모든 클래스에 makeSound()멤버함수 만들어줘야함(가상키워드 사용해야 할듯)
7. makeSound()멤버함수는 각각의 클래스를 기반으로 적절한 메세지를 출력해야함.
8. WrongAnimal class를 상속받는 WrongCat class를 만들고 WrongAniaml makeSound()를 출력해라. 