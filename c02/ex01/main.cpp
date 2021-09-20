#include "Fixed.hpp"

int main(void) {

    Fixed a;
    Fixed const b(10);
    //상수객체를 선언하면 2가지 특징이 있다.
    //첫번째는 데이터의 변경이 허용되지 않고
    //두번째는 const 멤버함수 이외에는 호출할 수 없다.(즉 const 멤버함수 안에서는 멤버변수 값을
    //변경 할 수 없기 때문에 첫번째의 데이터변경이 허용되지 않는다는 것이 맞다.)
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
    return 0;
}