#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

# include "info.hpp"

class phoneBook
{
private:
    int     num; // 연락처 개수
    info    contact[8]; // 연락처상세 내용
public:
    phoneBook() : num(0){}; // 클래스 생성자 동시에 초기화
    void    addContact(); // 연락처추가
    void    searchContact(); // 연락처검색
};

#endif