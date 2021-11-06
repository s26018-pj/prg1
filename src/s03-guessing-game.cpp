#include <iostream>
#include <random>
#include <string>

auto main(int, char**) -> int
{	
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(1,100);

	int randomNumber = static_cast<int>(dist6(rng));
	int guess {-1};	

	while (guess != randomNumber)
	{
		std::cout << "guess: ";
		std::cin >> guess;
		if (guess < randomNumber)
		{
			std::cout << "number too small!" << std::endl;
		}
		else if (guess > randomNumber)
		{
			std::cout << "number too big!" << std::endl;
		}
	}

	std::cout << "just right!" << std::endl;
	
	return 0;
}
