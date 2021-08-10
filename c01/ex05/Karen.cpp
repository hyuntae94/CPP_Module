#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love to get extra baconfor my" 
    "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extrabacon cost more money."
     "You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
    "I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
    // void (*complaint[])(void) = { &debug, &info, &warning, &error } // 함수포인터
	void	(Karen::*complaint[])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	std::string complaintLevels[] = { "debug", "info", "warning", "error" };

	for (int i = 0; i < 4; i++)
	{
        //void (*selectedComplaint)(void) = complaint[i]// debug부터 error까지 
		void (Karen::*selectedComplaint)(void) = complaint[i];
		if (level == complaintLevels[i])
			(this->*selectedComplaint)();
	}
}