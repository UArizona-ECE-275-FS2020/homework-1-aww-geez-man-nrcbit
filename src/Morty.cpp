/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 


	void C137::Morty(int start, int end)
	{
		for (int loop = start; loop <= end; loop++)
		{
			std::cout << loop << ":";
			if (loop % 5 == 0 && ((loop % 3) != 0))
			{
				std::cout << "Geez" << std::endl;
			}
			else if (loop % 3 == 0 && ((loop % 5) != 0))
			{
				std::cout << "Aww" << std::endl;
			}
			else if (loop % 15 == 0)
			{
				std::cout << "Aww Geez Man" << std::endl;
			}
			else
			{
				std::cout << std::endl;
			}
		}
	}
	void C137::Morty(int start, int end, int step)
	{
		for (int loop = start; loop <= end; loop = loop + step)
		{
			std::cout << loop << ":";
			if (loop % 5 == 0 && ((loop % 3) != 0))
			{
				std::cout << "Geez" << std::endl;
			}
			else if (loop % 3 == 0 && ((loop % 5) != 0))
			{
				std::cout << "Aww" << std::endl;
			}
			else if (loop % 15 == 0)
			{
				std::cout << "Aww Geez Man" << std::endl;
			}
			else
			{
				std::cout << std::endl;
			}
		}
	}



// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 


	void Z286::Morty(int start, int end)
	{
		for (int loop = start; loop <= end; loop++)
		{
			std::cout << loop << ":";
			if (loop % 5 == 0 && ((loop % 3) != 0))
			{
				std::cout << "zeeG" << std::endl;
			}
			else if (loop % 3 == 0 && ((loop % 5) != 0))
			{
				std::cout << "wwA" << std::endl;
			}
			else if (loop % 15 == 0)
			{
				std::cout << "naM zeeG wwA" << std::endl;
			}
			else
			{
				std::cout << std::endl;
			}
		}
	}
	

	void Z286::Morty(int start, int end, int step)
	{
		for (int loop = start; loop <= end; loop = loop + step)
		{
			std::cout << loop << ":";
			if (loop % 5 == 0 && ((loop % 3) != 0))
			{
				std::cout << "zeeG" << std::endl;
			}
			else if (loop % 3 == 0 && ((loop % 5) != 0))
			{
				std::cout << "wwA" << std::endl;
			}
			else if (loop % 15 == 0)
			{
				std::cout << "naM zeeG wwA" << std::endl;
			}
			else
			{
				std::cout << std::endl;
			}
		}

	}

