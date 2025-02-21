#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	// if (argc != 2)
	// 	std::cout << "Enter 2 arguments" << std::endl;

	
	std::ifstream file {argv[1]};
	std::string	s1 {};
	std::string s2 {"hoi"};
	std::string s3 {"doei"};
	std::string::size_type n {0};

	while (std::getline(file, s1))
	{
		while (n = s1.find(s2, n) != s1.npos)
		{
			
			s1.erase(n, s2.length());
			s1.insert(n, s3);
			n += s3.length();
		}
		std::cout << s1 << std::endl;
	}

	
	

	// std::cout << n << std::endl;

	// std::cout << s1 << std::endl;
}