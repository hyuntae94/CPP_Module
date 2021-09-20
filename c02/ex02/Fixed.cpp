#include "Fixed.hpp"

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    fixedPointValue = 0;
}

Fixed::Fixed(const int val)
{   
    // std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = val << this->fractionalBits;
}

Fixed::Fixed(const float val)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = (int)roundf(val * 256);//(val * (1 << this->fractionalBits))
}

Fixed::Fixed(const Fixed& origin)//(Fixed* const this)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = origin;
}

Fixed& Fixed::operator = (const Fixed& props)//c.operator=(b)
{
    // std::cout << "Assignation operator called" << std::endl;
    fixedPointValue = props.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    fixedPointValue = raw;
}

int Fixed::toInt() const
{
    return (this->fixedPointValue >> this->fractionalBits);
}

float Fixed::toFloat() const
{
    return ((float)this->fixedPointValue / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(const Fixed &compare)
{
    return (this->fixedPointValue > compare.fixedPointValue);
}

bool Fixed::operator<(const Fixed &compare)
{
    return (this->fixedPointValue < compare.fixedPointValue);
}

bool Fixed::operator>=(const Fixed &compare)
{
    return (this->fixedPointValue >= compare.fixedPointValue);
}

bool Fixed::operator<=(const Fixed &compare)
{
    return (this->fixedPointValue <= compare.fixedPointValue);
}

bool Fixed::operator==(const Fixed &compare)
{
    return (this->fixedPointValue == compare.fixedPointValue);
}

bool Fixed::operator!=(const Fixed &compare)
{
    return (this->fixedPointValue != compare.fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &a)
{
    Fixed b;

    b.setRawBits(this->fixedPointValue + a.fixedPointValue);
    return (b);//반환되고 사라짐
}
//지역클래스 b는 연산자호출이 끝나면 사라지기 때문에 참조반환을 사용하지 못한다.
//참조반환이나 주소값반환은 지역변수가 사라지는 호출에서는 사용 할 수없다.
Fixed Fixed::operator-(const Fixed &a)
{
    Fixed b;

    b.setRawBits(this->fixedPointValue - a.fixedPointValue);
    return (b);
}

Fixed Fixed::operator*(const Fixed &a)
{
    Fixed b;

    b.setRawBits(this->fixedPointValue * a.fixedPointValue / (1 << this->fractionalBits));
    return (b);
}

Fixed Fixed::operator/(const Fixed &a)
{
    Fixed b;

    b.setRawBits(this->fixedPointValue / a.fixedPointValue * ( 1 << this->fixedPointValue));
    return (b);
}

Fixed& Fixed::operator++()
{
    ++(this->fixedPointValue);
    return (*this);
}
//전위증감연산자는 증감반영이 바로 되어야하기 때문에 자기 자신을 참조리턴해야한다.

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);//전위증감연산자 호출해서 1증가

    return (temp);
}
//전위증감연산자와의 구분을 위하여 쓰레기변수인 int를 관례적으로 사용하지만 인수를 받지는 않는다.
//지역변수로 선언된 temp는 연산자호출후에 사라지기 때문에 참조리턴을 사용할 수 없다!!

Fixed& Fixed::operator--()
{
    --(this->fixedPointValue);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);//전위감소연산자 호출

    return (temp);
}

// Fixed &Fixed::min(Fixed &a, Fixed &b)
// {
// 	if (a < b)
// 		return (a);
// 	return (b);
// }
//static멤버함수로 선언한 이유는 a.value < b.value 처럼 값을 직접 대소비교를 방지하기 위함이다.
//왜냐하면 static멤버함수내에서는 static멤버변수만 사용가능하기 때문에 일반멤버변수는 사용 할 수 없다.

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    // std::cout << "const있는 static멤버함수 입니다!!" << std::endl;
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    // std::cout << "const있는 static멤버함수 입니다!!" << std::endl;
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    // std::cout << "const없는 static멤버함수 입니다!!" << std::endl;
	if (a < b)
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    // std::cout << "const없는 static멤버함수 입니다!!" << std::endl;
	if (a > b)
		return (a);
	return (b);
}