#include "info.hpp"

void info::inputInfo()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << s_cate[i] << " : ";
        std::getline(std::cin, content[i]);
        if (std::cin.eof())
            exit(-1);
    }
}

void info::previewInfo()
{
    std::string str[3];

    for (int i = 0; i < 3; i++)
    { 
        str[i] = content[i].substr(0, 10);
        for (int j = 0; j < 9; j++){
            if (str[i][j] >= 9 && str[i][j] <= 13)
                str[i][j] = ' ';
        }
        
        if (str[i].length() >= 10)
            str[i][9] = '.';
        
        std::cout<<std::setw(10)<<str[i]<<'|';
    }
    std::cout<<std::endl;
}
//ctrl+D -> 
void info::viewInfo()
{
    std::cout<<"\n--------\n";
    for (int i = 0; i < 5; i++)
        std::cout << s_cate[i] << " : " << content[i] << std::endl;
    std::cin.ignore();//idx번호와 함께 입력되는 개행문자 제거
}

std::string info::s_cate[5] = { "First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret" };