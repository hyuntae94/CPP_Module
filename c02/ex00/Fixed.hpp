#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int                 fixedPointValue;
    static const int    fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed&);
    Fixed& operator = (const Fixed&);
    int getRawBits() const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif 