#include "phonebook.hpp"

int main()
{
    std::string     cmd;
    phoneBook       pb;

    while (1)
    {
        std::cout<<"\nWelcome hyunkim PhoneBook\n\n";
        std::cout<<"only choose one(ADD, SEARCH, EXIT) : ";
        std::getline(std::cin, cmd);
        
        if (cmd == "ADD")
            pb.addContact();
        else if (cmd == "SEARCH")
            pb.searchContact();
        else if (cmd == "EXIT")
        {
            std::cout << "\nPhoneBook deleted\n\n";
            return (0);
        }
        else
            std::cout<<"\nInput Correct Command!!\n";
    }
    return (-1);
}