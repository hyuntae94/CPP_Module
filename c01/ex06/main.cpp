#include "Karen.hpp"

int _complaint(std::string complain)
{
	std::string levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == complain)
			return (i);
	}
	return (-1);
};

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: 인자는 2개입니다!!" << std::endl;
		return (1);
	}
	enum levels
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

	Karen karen;
	
	switch (_complaint(argv[1]))
	{
	case DEBUG :
		karen.complain("debug");
	case INFO :
		karen.complain("info");
	case WARNING :
		karen.complain("warning");
	case ERROR :
		karen.complain("error");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}

	return (0);
}