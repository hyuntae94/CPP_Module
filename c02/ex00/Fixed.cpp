#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fixedPointValue = 0;
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
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixedPointValue = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}