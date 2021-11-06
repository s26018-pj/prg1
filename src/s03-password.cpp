#include <iostream>
#include <string>

auto main(int argc, char** argv) -> int
{	
	std::string givenPassword {""};	
	
	if (argc == 1)
	{	
		std::cout << "No password provided!" << std::endl;
	} 
	else
	{
		std::string givenPassword {argv[1]};
	}

	std::string secretPassword {"student"};
	

	while (givenPassword != secretPassword)
	{
		std::cout << "password: ";
		std::cin >> givenPassword;
	}
	
	std::cout << "ok!" << std::endl;

	return 0;
}
