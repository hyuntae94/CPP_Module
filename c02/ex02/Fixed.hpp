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

    //overloading the comparison operators >, <, >=, <=, == and !=
    bool operator>(const Fixed &);
    bool operator<(const Fixed &);
    bool operator>=(const Fixed &);
    bool operator<=(const Fixed &);
    bool operator==(const Fixed &);
    bool operator!=(const Fixed &);

    //overloading the arithmetic operators +, -, *, and /
    Fixed operator+(const Fixed &);
    Fixed operator-(const Fixed &);
    Fixed operator*(const Fixed &);
    Fixed operator/(const Fixed &);

    Fixed operator++(int);//a++
    Fixed operator--(int);//a--
    Fixed &operator++();//++a
    Fixed &operator--();//--a

    static Fixed &min(Fixed&, Fixed&);
    static const Fixed &min(const Fixed &, const Fixed &);
    //static 멤버함수내에서는 일반멤버변수는 사용할 수 없고, static멤버변수만 사용가능
    //static 멤버함수내에서 선언된 지역변수는 static유무상관없이 사용가능!!
    //static 멤버함수를 사용하는 이유는 객체생성없이 static멤버변수에 간접적으로 접근하기 위함이다.
    static Fixed &max(Fixed&, Fixed&);
    static const Fixed &max(const Fixed &, const Fixed &);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif 