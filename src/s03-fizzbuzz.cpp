#include <iostream>
#include <string>

auto main(int argc, char** argv) -> int
{	
	int givenValue {0};
	
	if (argc == 1)
	{	
		std::cout << "No value provided!" << std::endl;
		return 1;
	} 
	else
	{
		givenValue = atoi(argv[1]);
	}

	for(int i=1; i<=givenValue; ++i)
	{
		std::cout << i;
		if(i % 3 == 0 && i % 5 == 0)
		{
			std::cout << " FizzBuzz";
		}
		else if(i % 3 == 0)
		{
			std::cout << " Fizz";
		}
		else if(i % 5 == 0)
		{
			std::cout << " Buzz";
		}
		std::cout << std::endl;
	}

	return 0;
}
