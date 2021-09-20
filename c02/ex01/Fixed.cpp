#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fixedPointValue = 0;
}

Fixed::Fixed(const int val)
{   
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = val << this->fractionalBits;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = (int)roundf(val * 256);//(val * (1 << this->fractionalBits))
}

Fixed::Fixed(const Fixed& origin)//(Fixed* const this)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
}

Fixed& Fixed::operator = (const Fixed& props)//c.operator=(b)
{
    std::cout << "Assignation operator called" << std::endl;
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
    std::cout << "setRawBits member function called" << std::endl;
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
    std::cout << "Destructor called" << std::endl;
}