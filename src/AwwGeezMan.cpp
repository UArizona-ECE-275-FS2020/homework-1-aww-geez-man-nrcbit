/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>
#include <string>



int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}


	



	// Parse the command line arguments
	int itteration = ac - 1;

	int start;
	int end; 
	int step;

	if (ac == 4)
	{

		std::string dimension;
		for (int i = 0; i < itteration - 1; i++)
		{
			if (i < (itteration - 2))
			{
				int counter = 0;
				if (counter == 0)
				{
					start = atoi(*(av + i + 1));
				}	
				if (counter == 1)
				{
					end = atoi(*av + i + 1);
				}
				counter++;
			}
			if (i == (itteration - 2))
			{
				std::cout << "We out here and i = " << i << std::endl;;
				dimension = *(av + 2 + i);
				std::cout << dimension << std::endl;
			}
		}
		
		if (dimension.compare("C137") == 0)
		{
			C137::Morty(start, end);
		}
		if (dimension.compare("Z286") == 0)
		{
			Z286::Morty(start, end);
		}
	}

	if (ac == 5)
	{
		std::string dimension;
		for (int i = 0; i < itteration - 1; i++)
		{
			if (i < (itteration - 2))
			{
				int counter = 0;
				if (counter == 0)
				{
					start = atoi(*(av + i + 1));
				}
				if (counter == 1)
				{
					end = atoi(*av + i + 1);
				}
				if (counter == 2)
				{
					step = atoi(*(av + i + 1));
				}
				counter++;

			}
			if (i == (itteration - 2))
			{
				std::cout << "We out here and i = " << i << std::endl;;
				dimension = *(av + 3 + i);
				std::cout << dimension << std::endl;
			}
		}
		if (dimension.compare("C137") == 0)
		{
			C137::Morty(start, end, step);
		}
		if (dimension.compare("Z286") == 0)
		{
			Z286::Morty(start, end, step);
		}
	}

	


	


	// Depending on the dimension of the arguments, call the appropriate Morty
	// function


	return 0;
}
