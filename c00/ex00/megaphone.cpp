#include <iostream>

char    uppercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}

int     main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
                std::cout << uppercase(argv[i][j]);
        }//trasnform!!
        std::cout<<"\n";
    }
}