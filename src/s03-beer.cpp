#include <iostream>
#include <string>

auto main(int argc, char** argv) -> int
{	
	int initialBottleCount {99};
	int bottleIndex {99};

	if (argc > 1)
	{	
		bottleIndex = atoi(argv[1]);
		initialBottleCount = bottleIndex;
	} 

	while(bottleIndex > 0)
	{
		std::cout << bottleIndex << " bottles of beer on the wall, " 
		<< bottleIndex << " bottles of beer." << std::endl;

		std::cout << "Take one down, pass it around, " << --bottleIndex
		<< " bottles of beer on the wall..." << std::endl;		

		--bottleIndex;
	}
	std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl;
	std::cout << "Go to the store and buy some more, " << initialBottleCount
	<< " bottles of beer on the wall..." << std::endl;

	return 0;
}
