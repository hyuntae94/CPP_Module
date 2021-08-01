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
    std::cout<< "\n--------------------------------------------\n";
    if (num > 7) _num = 8;
    else _num = num;
    for (int i = 0; i < _num; i++)
    {
        std::cout<<std::setw(10)<< i << "|";
        contact[i].previewInfo();
    }
    std::cout<<"\nindex : ";
    std::cin>>idx;
    if (std::cin.eof())
        exit(-1);
    if (idx < 0 || num <= idx)
    {
        std::cout<<"\nwrong index!\n";
        std::cout<< "\n--------------------------------------------\n";
        std::cin.ignore();//개행제거
    }
    else
        contact[idx].viewInfo();
}