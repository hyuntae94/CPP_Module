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
    return (b);//???????????? ?????????
}
//??????????????? b??? ?????????????????? ????????? ???????????? ????????? ??????????????? ???????????? ?????????.
//?????????????????? ?????????????????? ??????????????? ???????????? ??????????????? ?????? ??? ?????????.
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
//???????????????????????? ??????????????? ?????? ??????????????? ????????? ?????? ????????? ????????????????????????.

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);//????????????????????? ???????????? 1??????

    return (temp);
}
//??????????????????????????? ????????? ????????? ?????????????????? int??? ??????????????? ??????????????? ????????? ????????? ?????????.
//??????????????? ????????? temp??? ????????????????????? ???????????? ????????? ??????????????? ????????? ??? ??????!!

Fixed& Fixed::operator--()
{
    --(this->fixedPointValue);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);//????????????????????? ??????

    return (temp);
}

// Fixed &Fixed::min(Fixed &a, Fixed &b)
// {
// 	if (a < b)
// 		return (a);
// 	return (b);
// }
//static??????????????? ????????? ????????? a.value < b.value ?????? ?????? ?????? ??????????????? ???????????? ????????????.
//???????????? static???????????????????????? static??????????????? ?????????????????? ????????? ????????????????????? ?????? ??? ??? ??????.

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    // std::cout << "const?????? static???????????? ?????????!!" << std::endl;
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    // std::cout << "const?????? static???????????? ?????????!!" << std::endl;
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    // std::cout << "const?????? static???????????? ?????????!!" << std::endl;
	if (a < b)
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    // std::cout << "const?????? static???????????? ?????????!!" << std::endl;
	if (a > b)
		return (a);
	return (b);
}