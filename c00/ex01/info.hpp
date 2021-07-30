#ifndef _INFO_HPP_
# define _INFO_HPP_

#include <iostream>
#include <iomanip>
#include <string>

class info
{
private:
    std::string content[5];//입력받은 cate내용
    static  std::string s_cate[5];//쉽게 초기화 시키기 static변수로 선언
public:
    void    inputInfo();//정보입력->ADD
    void    previewInfo();//정보 미리보기->SEARCH
    void    viewInfo();//정보 출력->SEARCH
};

#endif