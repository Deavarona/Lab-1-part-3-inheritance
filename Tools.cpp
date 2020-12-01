#include "Tools.h"

double inputPositiveNumber()
{
	double number;
	while (1)
	{
		std::cin >> number;
		if (number > 0 && std::cin.get() == '\n')
		{
			return number;
		}
		else
		{
			std::cout << "Íåêîğğåêòíûé ââîä!" << std::endl;
			std::cout << "Ââîä: ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
		}
	}
}

int inputNaturalNumber()
{
	int number;
	while (1)
	{
		std::cin >> number;
		if (number > 0 && std::cin.get() == '\n')
		{
			return number;
		}
		else
		{
			std::cout << "Íåêîğğåêòíûé ââîä!" << std::endl;
			std::cout << "Ââîä: ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
		}
	}
}