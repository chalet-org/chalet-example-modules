module;

#include <iostream>

#include "library/LivableEnvironment.hpp"

export module Application;

import Animal.Cat;
import Animal.Dog;
import Location.VetOffice;

namespace mod
{
export struct Application
{
	int run()
	{
		LivableEnvironment environment;
		if (!environment.check())
			return 1;

		std::cout << '\n';

		Dog dog;
		dog.watch();

		std::cout << '\n';

		Cat cat;
		cat.watch();

		std::cout << '\n';

		VetOffice::welcome("Hello.");
		VetOffice::seeAnimal(dog);
		VetOffice::seeAnimal(cat);

		std::cout << std::endl;

		return 0;
	}
};
}