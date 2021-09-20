#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
class Fixed
{
private:
    int                   fixedPointValue;
    static const int      fractionalBits = 8;

public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed&);

    Fixed& operator = (const Fixed&);

    int getRawBits() const;
    void setRawBits(int const);

    float toFloat() const;
    int toInt() const;
    
    ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif 