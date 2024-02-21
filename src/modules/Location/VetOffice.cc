module;

#include <string>
#include <iostream>

export module Location.VetOffice;

import Animal.Base;

namespace mod::VetOffice
{
export void welcome(const std::string& inValue)
{
	std::cout << "Good morning.\n";
	std::cout << inValue << '\n';
}

export void seeAnimal(const BaseAnimal& inAnimal)
{
	std::cout << "This " << inAnimal.getType() << " is perfectly healthy.\n";
}
}
