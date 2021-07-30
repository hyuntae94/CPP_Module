#include "phonebook.hpp"

void    phoneBook::addContact()
{
    contact[num % 8].inputInfo();
    num++;
}

void    phoneBook::searchContact()
{
    int _num;
    int idx;

    std::cout<< "\n     index|first name| last name|  nickname|";
    std::cout<< "\n-----------------------------------\n";
    if (num > 7) _num = 8;
    else _num = num;
    for (int i = 0; i < _num; i++)
    {
        std::cout<<std::setw(10)<< i << "|";
        contact[i].previewInfo();
    }
    std::cout<<"index : ";
    std::cin>>idx;
    if (idx < 0 || num <= idx)
    //입력이 음수거나 범위에 없거나 정수가 아니면 fail속성은 내부
    //플래그 상태를 true로 고정시키기때문에 초기화시켜줘야한다.
    {
        std::cout<<"\nwrong index!\n";
        std::cin.ignore();//개행제거
    }
    else
        contact[idx].viewInfo();
}