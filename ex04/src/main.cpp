#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
		return (EXIT_FAILURE);
	}

	std::ifstream file {argv[1]};
	if (!file.is_open())
	{
		std::cerr << "Could not open file: " << argv[1] << std::endl;
		return (EXIT_FAILURE);
	}

	std::ofstream replaceFile {std::string {argv[1]}.append(".replace"), std::ios::out | std::ios::trunc};
	if (!replaceFile.is_open())
	{
		std::cerr << "Could not create file" << argv[1] << ".replace" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	line {};
	std::string searchStr {argv[2]};
	std::string replaceStr {argv[3]};
	std::string::size_type pos {0};

	while (std::getline(file, line))
	{
		pos = 0;
		while ((pos = line.find(searchStr, pos)) != line.npos)
		{
			
			line.erase(pos, searchStr.length());
			line.insert(pos, replaceStr);
			pos += replaceStr.length();
		}
		replaceFile << line << std::endl;
	}
}