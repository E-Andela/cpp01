#include <string>
#include <iostream>
#include <iomanip>

int main()
{
	std::string		string {"HI THIS IS BRAIN"};
	std::string*	stringPTR {&string};
	std::string&	stringREF {string};

	std::cout << std::setw(20) << "string address: " << &string << std::endl;
	std::cout << std::setw(20) << "stringPTR address: " << &stringPTR << std::endl;
	std::cout << std::setw(20) << "stringREF address: " << &stringREF << std::endl;

	std::cout << std::setw(20) << "string value: " << string << std::endl;
	std::cout << std::setw(20) << "stringPTR value: " << stringPTR << std::endl;
	std::cout << std::setw(20) << "stringPTR deref: " << *stringPTR << std::endl;
	std::cout << std::setw(20) << "stringREF value: " << stringREF << std::endl;
}