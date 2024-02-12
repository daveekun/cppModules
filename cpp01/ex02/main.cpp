#include <string>
#include <iostream>

int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "address of the string " << &s << std::endl;
	std::cout << "address of the pointer " << &stringPTR << std::endl;
	std::cout << "address of the reference " << &stringREF << std::endl;
	
	std::cout << "value of the string " << s << std::endl;
	std::cout << "value of the pointer " << *stringPTR << std::endl;
	std::cout << "value of the reference " << stringREF << std::endl;
}