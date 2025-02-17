#include <string>
#include <iostream>

int main(int argc, char* argv[])
{
	if (argc != 2)
		std::cout << "Enter 2 arguments" << std::endl;

	std::string	s1 {argv[1]};
	std::string s2 {"hoi"};
	std::string s3 {"doei"};
	std::string::size_type n;

	n = s1.find(s2, 0);
	if (n != s1.npos)
	{
		s1.erase(n, s2.length());
		s1.insert(n, s3);
	}
	

	std::cout << n << std::endl;

	std::cout << s1 << std::endl;
}