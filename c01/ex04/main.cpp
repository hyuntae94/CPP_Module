#include <iostream>
#include <string>
#include <fstream>

int		main(int argc, char **argv)
{
	std::ifstream	readfile;
	std::ofstream	writefile;
	std::string		file;
	std::string		line;
	std::string		s1;
	std::string		s2;
	std::string::size_type pos;

	if (argc !=4)  // 인자로 파일이름, 문자열 두개가 들어오지 않으면
	{
		std::cout<<"Error : 인자는 반드시 4개입니다.\n";
		return (-1);
	}
    if (argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        std::cout<<"Error : 빈 문자열을 안됩니다!!\n";
		return (-1);
    }
	file = argv[1];  // 파일 이름
	s1 = argv[2];  // 첫번째 문자열
	s2 = argv[3];  // 두번째 문자열
	readfile.open(file);  // 읽을 파일 열기
	file += ".replace";  // 파일이름 수정
	writefile.open(file);  // 출력할 파일 열기
	if (!readfile.is_open() || !writefile.is_open())  // 둘중에 하나라도 파일이 안열렸다면
	{
		std::cout<<"Error : 파일이 안열립니다.\n";
		return (-1);		
	}
	while (std::getline(readfile, line))  // 한줄씩 파일 읽기
	{
		pos = 0;
		while (1)
		{
			pos = line.find(s1, pos);  // 한줄읽은 line에 문자열이 s1 있는 위치찾기
			if (pos == std::string::npos)  // line에 s1 문자열이 없으면
				break ;
			line.replace(pos, s1.length(), s2);  // s1의 문자열을 s2로 변경
			pos += s2.length();
		}
		writefile << line;  // 변경된 문자열 출력할 파일에 넣기
		if (!readfile.eof())  // 읽을게 남았다면
			writefile<<'\n';  // 출력할 파일에 개행추가
	}
	readfile.close();
	writefile.close();
	return (0);
}