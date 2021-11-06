#include <iostream>
#include <string>
#include <chrono>
#include <thread>

auto main(int argc, char** argv) -> int
{	
	if (argc == 1)
	{
		std::cout << "No countdown time provided!" << std::endl;
		return 1;
	}

	int time {std::stoi(argv[1])};

	for (int i = time; i >= 0; --i)
	{
		std::cout << i << "..." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds{1000});
	}

	return 0;
}
